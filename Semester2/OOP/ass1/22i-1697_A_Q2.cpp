//============================================================================
// Name        : Saif-Ur-Rehman
// Student id  : 22i-1697
// assignment No : 01
//============================================================================
#include<iostream>
using namespace std;
int toupper(char *ch);
int tolower(char *ch);
int isspace(const char *ch);
char *strncpy(char *dest,const char *src,size_t n);
int strcmp(const char* cstr1,const char* cstr2);
char *strncat(char *dest,const char *src,size_t n);
char * strstr(char *cstr1,char *cstr2);
char *strtok(char * cstr,const char * delim);
int main()
{
    char *ch=new char[100];
    char *out=0;
    char *dest=new char[100]; 
    int choice=0,choicetok=0,nchar=0;
    char input='\0',delim='\0';
    do{
	    cout<<"\n1.Convert to upper.";
	    cout<<"\n2.Convert to lower.";
	    cout<<"\n3.Check spaces.";
	    cout<<"\n4.Copy Strings.";					//Displaying menu.
	    cout<<"\n5.Compare strings.";
	    cout<<"\n6.Concatenate strings.";
	    cout<<"\n7.String witin a string.";
	    cout<<"\n8.Tokenize string.";
	    cout<<"\n\nEnter your choice:";
	    cin>>choice;
	    cin.ignore();
	    system("clear");
	    switch(choice)					//switch for calling relevant functions.
	    {
	    	case 1:
	    		cout<<"\nEnter a string:";
	    		cin.getline(ch,100);
	    		toupper(ch);
	    		cout<<ch<<endl;
	    		break;
	    	case 2:
	    		cout<<"\nEnter a string:";
	    		cin.getline(ch,100);
	    		tolower(ch);
	    		cout<<ch<<endl;
	    		break;
	    	case 3:
	    		cout<<"\nEnter a string:";
	    		cin.getline(ch,100);
	    		cout<<isspace(ch)<<endl;
	    		break;
	    	case 4:
	    		cout<<"\nEnter  string-1:";
	    		cin.getline(dest,100);
	    		cout<<"\nEnter string -2:";
	    		cin.getline(ch,100);
	    		cout<<"\nEnter the number of characters to compare:";
	    		cin>>nchar;
	    		cout<<strncpy(dest,ch,nchar)<<endl;
	    		break;
	    	case 5:
	    		cout<<"\nEnter  string-1:";
	    		cin.getline(dest,100);
	    		cout<<"\nEnter string -2:";
	    		cin.getline(ch,100);
	    		cout<<strcmp(dest,ch)<<endl;
	    		break;
	    	case 6:
	    		cout<<"\nEnter  string-1:";
	    		cin.getline(dest,100);
	    		cout<<"\nEnter string -2:";
	    		cin.getline(ch,100);
	    		cout<<"\nEnter the number of characters to conatenate:";
	    		cin>>nchar;
	    		cout<<strncat(dest,ch,nchar)<<endl;
	    		break;
	    	case 7:
	    		cout<<"\nEnter  string-1:";
	    		cin.getline(dest,100);
	    		cout<<"\nEnter string -2:";
	    		cin.getline(ch,100);
	    		cout<<strstr(dest,ch)<<endl;
	    		break;
	    	case 8:
	    		cout<<"\nEnter a string:";
	    		cin.getline(ch,100);
	    		cout<<"\nEnter the number of tokens:";
	    		cin>>choicetok;
	    		for(int i=1;i<=choicetok;i++)
	    		{
	    			if(i==1)
	    			{
	    				out=strtok(ch," ");
	    				if(out==NULL)
	    				break;
			   		cout<<out<<endl;	
	    			}
	    			else
	    			{
	    				out=strtok(NULL," ");
	    				if(out==NULL)
	    				break;
			   		cout<<out<<endl;	
	    			}
	    			delete [] out;
			    	out=0;
	    			
	    		} 
	    		
	    }
	    cout<<"\nDo you want to continue!Y for yes N for no:";		//continuation check.		
	    cin>>input;
	    system("clear");
	 }while(input=='Y' || input=='y');
    
    delete [] dest;
    delete [] ch;			//deleting occupied memory.
    dest=0;
    ch=0;

}
int toupper(char *ch)
 {
     int i=0;
     if(ch==NULL)
     	return 0;
     while(*(ch+i)!='\0')
     {
         if(*(ch+i)>='a' && *(ch+i)<='z')			//converting to capital by subracting 32 in ascii.
         {
             *(ch+i)-=32;
         }
         i++;

     }
     return 1;
 }
int tolower(char *ch)
 {
     int i=0;
     if(ch==NULL)
     	return 0;
     while(*(ch+i)!='\0')
     {
         if(*(ch+i)>='A' && *(ch+i)<='Z')			//converting to lowercase by adding 32 in ascii.
         {
             *(ch+i)+=32;
         }
         i++;
     }
      return 1;
 }
 int isspace(const char *ch)
 {
     int i=0;
     int check=0;
     while(*(ch+i)!='\0')		//looping through whole string.
     {
         if(*(ch+i)==' ' || *(ch+i)=='\r' || *(ch+i)=='\n' || *(ch+i)=='\t' || *(ch+i)=='\f' || *(ch+i)=='\v')			//check on white spaces.
         check=1;
         i++;
     }
     return check;
 }
 char *strncpy(char *dest,const char *src,size_t n)
 {
     int i=0;
     while(i<n && *(src+i)!='\0')			//looping through string specific number of times.
     {
         *(dest+i)=*(src+i);				//copying characters.
         i++;
     }
     return dest;
 }
 int strcmp(const char* cstr1,const char* cstr2)
 {
     int i=0;
     int check=0;
     while(*(cstr1+i)!='\0' && *(cstr2+i)!='\0')		//looping till end of either string.
     {
         if(*(cstr1+i)< *(cstr2+i))		//comparing characters.
         {
             check=-1;
             break;
         }
         else if(*(cstr2+i)< *(cstr1+i))
         {
             check=1;
             break;
         }
         i++;

     }
     if(check==0)
     {
         if(*(cstr1+i)=='\0' && *(cstr2+i)!='\0')			//checking the ends and remainingness of strings.
         {
             check=-1;
         }
         else if(*(cstr1+i)!='\0' && *(cstr2+i)=='\0')
         {
             check=1;
         }
     }
     return check;
 }
 char *strncat(char *dest,const char *src,size_t n)
 {
     int i=0;
     while(*(dest+i)!='\0')			//looping to access end of destination string.
     {
         i++;
     }
     for(int j=0;j<n && *(src+j)!='\0';j++,i++)
     {
         *(dest+i)=*(src+j);			//appending source to destination 
     }
     *(dest+i)='\0';				//closing destination.
     return dest;

 }
 char * strstr(char *cstr1,char *cstr2)
 {
     char * ptr=0;
     int i=0;
     int j=0;
     int k=0;
     bool check;
     while(*(cstr1+i)!='\0')				//looping through string 1.
     {
         if(*(cstr1+i)==*(cstr2+0))
         {
             check=0;
             for(j=1,k=i;*(cstr2+j)!='\0';j++)			//checking the existence of 2nd string in string 1.
             {
                 if(*(cstr1+(++k))!=*(cstr2+j))
                 {
                     check=1;
                     break;
                 }
             }


         }
         if(check==0)
         {
             ptr=(cstr1+i);			//pointing to string within a string.
             break;
         }
         i++;
     }
     return ptr;
 }
char *strtok(char * cstr,const char * delim)
{

    static char *ptr=0;
    if(cstr!=NULL)
    {
    	ptr=cstr;				//pointing to string if passed.
    }
    if(ptr==NULL)
    	return NULL;
    int i=0;
    while(*(ptr+i)!=*(delim))			//looping to read number of characters till delimeter.
        i++;
    char *nptr=new char [i+1];
    i=0;
    while(*(ptr+i)!=*(delim) && *(ptr+i)!='\0')			//looping to reach the delimeter or end of loop.
    {
        *(nptr+i)=*(ptr+i);
        i++;
    }
    *(nptr+i)='\0';
     if(*(ptr+i)=='\0')
     	ptr= NULL;
     else
     ptr+=(i+1);
     return nptr;

}


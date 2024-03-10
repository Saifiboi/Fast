/*
 * Name ::SAif Ur rehman
 * Roll Number::i221697
 * Assignment :: 2
 * Section :: CY-A
 * Question 7
 */
#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class Student {
private:
	char *Num_Roll;
	char *name;
	int Batch;
	int Courses_Code[5];
	char *Courses_Name[5];
	char Courses_Grades[6];
	float CGPA;
	char *Degree;
	char *Dob;
public:
	Student();
	Student(char *Num_Roll,char *name,int Batch,int Course_code[],char *Course_name[],char Course_grades[],char *Degree,char*Dob);
	void setvalues();
	virtual ~Student();
	void setBatch();
	void setDegree();
	void setDob();
	void setName();
	void setNumRoll();
	void setCourseCode();
	void setCourseName();
	void setCourseGrade();
	void calcgpa();
	void display();
};
void studentDemo();
Student::Student() {
	this->name=NULL;
	this->Num_Roll=NULL;
	this->Dob=NULL;
	this->Degree=NULL;
	this->Batch=0;
	this->CGPA=0;
	for(int i=0;i<5;i++)
	{
		this->Courses_Code[i]=0;
		this->Courses_Name[i]=NULL;
		this->Courses_Grades[i]='\0';

	}
}
Student::Student(char *Num_Roll,char *name,int Batch,int Course_code[],char *Course_name[],char Course_grades[],char *Degree,char*Dob)
{
	this->name=new char [30];
	strcpy(this->name,name);
	this->Num_Roll=new char [8];
	strcpy(this->Num_Roll,Num_Roll);
	this->Dob=new char [18];
	strcpy(this->Dob,Dob);
	this->Degree=new char [6];
	strcpy(this->Degree,Degree);
	this->Batch=Batch;
//	this->CGPA=CGPA;
	for(int i=0;i<5;i++)
	{
		this->Courses_Code[i]=Course_code[i];
		this->Courses_Name[i]=new char [5];
		strcpy(this->Courses_Name[i],Course_name[i]);
		this->Courses_Grades[i]=Course_grades[i];
	}
	calcgpa();
}
void Student::setvalues()
{
	if(this->name!=NULL)
	{
		delete [] this->name;
	}
	this->name=new char [30];
	cout<<"\nWELCOME TO DATA ENTRY PORTAL:::\n";
	cout<<"\nEnter the name:";
	cin.getline(this->name,30);
//	cin.ignore();
	if(this->Num_Roll!=NULL)
	{

		delete [] this->Num_Roll;
	}
	this->Num_Roll=new char [8];
	cout<<"Enter Roll Number:";
	cin.getline(this->Num_Roll,8);
//	cin.ignore();
	cout<<"Enter Date of birth:";
	if(this->Dob!=NULL)
	{
		delete [] this->Dob;
	}
	this->Dob=new char [30];
	cin.getline(this->Dob,30);
//	cin.ignore();
	cout<<"Enter Batch :";
	cin>>this->Batch;
	cin.ignore();
	cout<<"Enter Degree :";
	if(this->Degree!=NULL)
	{
		delete [] this->Degree;
	}
	this->Degree=new char [40];
	cin.getline(Degree, 40);
//	cin.ignore();

	for(int i=0;i<5;i++)
	{
		cout<<"Enter course code "<<i+1<<" :";
		cin>>(this->Courses_Code[i]);
		cin.ignore();
		if(this->Courses_Name[i]!=NULL)
		{
			delete [] this->Courses_Name[i];
		}
		this->Courses_Name[i]=new char [30];
		cout<<"Enter course Name:";
		cin.getline(this->Courses_Name[i],30);
//		cin.ignore();
		cout<<"Enter Course Grades:";
		cin>>this->Courses_Grades[i];
	}


	//calcgpa();

}

void Student::setBatch() {
	cout<<"\nEnter Batch :";
	cin>>this->Batch;
}

void Student::setDegree() {
	cout<<"Enter Degree :";
	cin.getline(this->Degree, 40);
	cin.ignore();
}

void Student::setDob() {
	cout<<"Enter Date of birth:";
	cin.getline(this->Dob,16);
	cin.ignore();
}

void Student::setName() {
	cout<<"\nEnter the name:";
	cin.getline(this->name,30);
	cin.ignore();
}

void Student::setNumRoll() {
	cout<<"Enter Roll Number:";
	cin.getline(this->Num_Roll,8);
	cin.ignore();
}
void Student::setCourseCode()
{
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter course code "<<i+1<<" :";
		cin>>this->Courses_Code[i];
	}
}
void Student::setCourseName()
{
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter course Name"<<i+1<<" :";
		cin.getline(this->Courses_Name[i],40);
		cin.ignore();
	}
}
void Student::setCourseGrade()
{
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter course Grade "<<i+1<<" :";
		cin>>this->Courses_Grades[i];
	}
}
void Student::calcgpa()
{
		float sgpa=0;
		int point=0;
	for (int i=0;i<5;i++)
	{
			point=0;
		if(this->Courses_Grades[i]=='A')
		{
			point=4.0;
		}
		else if(this->Courses_Grades[i]=='B')
		{
			point=3;
		}
		else if(this->Courses_Grades[i]=='C')
		{
			point=2;
		}
		else if(this->Courses_Grades[i]=='D')
		{
			point=1;
		}
		if(i==0 || i==1)
		{
			point*=4;
		}
		else
		{
			point*=3;
		}
		sgpa+=point;
	}
	this->CGPA=sgpa/17;
}
void Student::display()
{
	for(int i=0;i<118;i++)
	{
		cout<<"_";
	}
	cout<<endl;
	cout<<"|Student Name:\t"<<this->name;
	cout<<setw(70)<<"";
	cout<<"Roll No:\t"<<this->Num_Roll;
	cout<<setw(7)<<"|";
	cout<<endl;
	cout<<"|Date of Birth:\t"<<this->Dob;
	cout<<setw(20)<<"";
	cout<<"Univ.Reg.No:\t"<<this->Num_Roll;
	cout<<setw(15)<<"";
	cout<<"Degree:\t"<<this->Degree;
	cout<<setw(8)<<"";
	cout<<"|";
	cout<<endl;
	cout<<"|";
	cout<<setw(30);
	for(int i=0;i<55;i++)
	{
		cout<<"_";
	}
	cout<<setw(32)<<"";
	cout<<"|";
	cout<<endl;
	cout<<"|";
	cout<<setw(29)<<"";

	cout<<"|Code"<<setw(30)<<"Course title"<<setw(10)<<"Crd"<<setw(5)<<"Grd"<<setw(5)<<"Rmk|";
	cout<<setw(33)<<"|";
	cout<<endl;
	cout<<"|";
	cout<<setw(29)<<"";
	for(int i=0;i<55;i++)
		{
			cout<<"_";
		}
	cout<<setw(33)<<"|";
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		if(i==0||i==1)
		{
			cout<<"|";
			cout<<setw(30)<<"|"<<this->Courses_Code[i]<<setw(30)<<this->Courses_Name[i]<<setw(10)<<"4"<<setw(5)<<this->Courses_Grades[i]<<setw(5)<<"|";
			cout<<setw(33)<<"|";
			cout<<endl;
		}
		else
		{

			cout<<"|";
			cout<<setw(30)<<"|"<<this->Courses_Code[i]<<setw(30)<<this->Courses_Name[i]<<setw(10)<<"3"<<setw(5)<<this->Courses_Grades[i]<<setw(5)<<"|";
			cout<<setw(33)<<"|";
			cout<<endl;
		}

	}
	cout<<"|";
		cout<<setw(30);
		cout<<"|";
		for(int i=0;i<53;i++)
		{
			cout<<"_";
		}
		cout<<"|";
		cout<<setw(32)<<"";
		cout<<"|";
		cout<<endl;
		cout<<"|";
		cout<<setw(50)<<"Credit attempted:\t17";
		cout<<setw(15)<<"";
		cout<<"GPA:\t"<<setprecision(2)<<this->CGPA;
		cout<<setw(35)<<"|";
		cout<<endl;
		cout<<"|";
		cout<<setw(50)<<"Credit Earned:\t17";
		cout<<setw(15)<<"";
		cout<<"CGPA:\t"<<this->CGPA;
		cout<<setw(35)<<"|";
		cout<<endl;
cout<<"|";
	for(int i=0;i<116;i++)
		{
			cout<<"_";
		}
	cout<<"|";
	cout<<endl;

}
Student::~Student() {

/*delete []this->name;
delete []this->Degree;
delete []this->Num_Roll;
delete []this->Dob;
for (int i=0;i<5;i++)
{
	delete []this->Courses_Name;
}
*/
}
void studentDemo()
{
	char *name;
	name=new char [20];
	strcpy(name,"saifi\0");
	int batch=22;
	char *roll;
	roll=new char [8];
		strcpy(roll,"i221697\0");
		int coursecode[5]={1001,1002,1003,1004,1005};
		char coursegrade[6]={'A','A','B','B','B'};
		char *Degree;
		Degree=new char [6];
			strcpy(Degree,"Bs CY\0");
			char *Dob;
			Dob=new char [18];
			strcpy(Dob,"28 november 2003\0");
			char *coursename[5];
			for(int i=0;i<5;i++)
			{
				coursename[i]=new char [5];
			}
			strcpy(coursename[0],"OOP\0");
			strcpy(coursename[1],"LA\0");
			strcpy(coursename[2],"PF\0");
			strcpy(coursename[3],"Cal\0");
			strcpy(coursename[4],"diff\0");

	Student s1(roll,name,batch,coursecode,coursename,coursegrade,Degree,Dob);
	int choice;
	cout<<"\nEnter your choice ::";
	cout<<"1.Set Values:\n";
	cout<<"2.Set Batch:\n";
	cout<<"3.Set course codes:\n";
	cout<<"4.Set Course Grades:\n";
	cout<<"5.Set Course Names:\n";
	cout<<"6.Set Degree:\n";
	cout<<"7.Set Date of birth:\n";
	cout<<"8.Set Name:\n";
	cout<<"9.Set Roll Number:\n";
	cout<<"10.Display:\n";
	char ch='y';
	while(ch!='n' && ch!='N')
	{
		cin>>choice;
		switch(choice)
		{
		case 1:
			s1.setvalues();
			break;
		case 2:
			s1.setBatch();
			break;
		case 3:
			s1.setCourseCode();
			break;
		case 4:
			s1.setCourseGrade();
			break;
		case 5:
			s1.setCourseName();
			break;
		case 6:
			s1.setDegree();
			break;
		case 7:
			s1.setDob();
			break;
		case 8:
			s1.setName();
			break;
		case 9:
			s1.setNumRoll();
			break;
		case 10:
			s1.display();
			break;
		}
		cout<<"\nDo you want to continue y for yes n for no::\n";
		cin>>ch;
	}










}
int main()
{
	studentDemo();
}

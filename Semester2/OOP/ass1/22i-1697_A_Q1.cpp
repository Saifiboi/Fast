//============================================================================
// Name        : Saif-Ur-Rehman
// Student id  : 22i-1697
// assignment No : 01
//============================================================================
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
float play(int ****,int ,const int &,string *);
void distance(int ****matrix,string *time_arr,int dimension,const int TIME,int ,int ,int);
void init(int ****,int ,const int &);
void print_reward_locations(int ****,string *,int dimension,const int TIME);
int main()
{
    
    const int TIME=3;
    string *time_arr=new string[TIME];
    *(time_arr+0)="Past\0";
    *(time_arr+1)="Present\0";					//initializinf time array.
    *(time_arr+2)="Future\0";
    int input_Length=0;
    cout<<"\nEnter Length of Matrix:";				//Taking length of matrix.
    cin>>input_Length;
    int ****matrix=new int ***[input_Length];
    for(int i=0;i<input_Length;i++)
    {
        *(matrix+i)=new int **[input_Length];
        for(int j=0;j<input_Length;j++)
        {								//Dynamically allocating memory.
            *(*(matrix+i)+j)=new int *[input_Length];
            for(int k=0;k<input_Length;k++)
            {
                *(*(*(matrix+i)+j)+k)=new int [TIME];
            }
        }
    }
    system("clear");
    float score=0;
    char choice='\0';
    do
    {
    	score=play(matrix,input_Length,TIME,time_arr);
    	cout<<"\n The rewards were palced at:\n";				//Displaying result of Game.
    	print_reward_locations(matrix,time_arr,input_Length,TIME);
    	cout<<"\nYour scores are:"<<score<<endl;
    	cout<<"\nDo you want to play again:";
    	cin>>choice;
    	system("clear");
    }while(choice=='y' || choice=='Y');
    
    
    for(int i=0;i<input_Length;i++)
    {
        for(int j=0;j<input_Length;j++)
        {
            for(int k=0;k<input_Length;k++)					//deallocating memory.
            {
                delete [] *(*(*(matrix+i)+j)+k);
            }
            delete [] *(*(matrix+i)+j);
        }
        delete [] *(matrix+i);
    }
    delete [] matrix;
    matrix=0;
    
}
void init(int****matrix,int dimension,const int &TIME)
{
	srand(time(0));
	for(int i=0;i<dimension;i++)
	{
		for(int j=0;j<dimension;j++)
		{									//initialing array to 0.
			for(int k=0;k<dimension;k++)
			{
				for(int l=0;l<TIME;l++)
				{
					*(*(*(*(matrix+i)+j)+k)+l)=0;				//0=empty
				}
			}
		}
	}
	int cal40=(0.4)*pow(dimension,3)*TIME;						//calculating 40 prcnt of total memory.
	int x=0,y=0,z=0,time_axis=0;
	for(int i=0;i<cal40;i++)
	{										//placing reward randomly.
		x=(rand()%dimension);
		y=(rand()%dimension);
		z=(rand()%dimension);
		time_axis=(rand()%TIME);
		if(*(*(*(*(matrix+x)+y)+z)+time_axis)==0)
		{
			*(*(*(*(matrix+x)+y)+z)+time_axis)=1;		//1=reward
		}
		else 
			--i;		
	}	
}
void print_reward_locations(int ****matrix,string *time_arr,int dimension,const int TIME)
{
	int reward=0;
	for(int i=0;i<dimension;i++)
	{
		for(int j=0;j<dimension;j++)
		{
			for(int k=0;k<dimension;k++)
			{
				for(int l=0;l<TIME;l++)
				{
					if(*(*(*(*(matrix+i)+j)+k)+l)==1)	//1=reward.			//printing locations having reward
					{
						cout<<"Reward_"<<++reward<<":"<<i<<","<<j<<","<<k<<","<<*(time_arr+l)<<endl;
					}	
				}
			}
		}
	}
}
float play(int****matrix,int dimension,const int &TIME,string *time_arr)
{
	 float score=0.0;
	 init(matrix,dimension,TIME);
	 int in_x,in_y,in_z;
	 string time_in;
	 int N_moves;
	 cout<<"\nEnter the number of moves:";
	 cin>>N_moves;
	 while(N_moves<0)
	 {
	 	cout<<"\nInvalid Input!Moves can't be negative !Try again:";
	 	cin>>N_moves;
	 }												//loops for validating input.
	 cout<<"\nEnter Your Starting location :";
	 cin>>in_x>>in_y>>in_z;
	 while(in_x<0 || in_x>dimension-1)
	 {
	 	cout<<"\nInvalid Input!x-axis can't be negative !Try again:";
	 	cin>>in_x;
	 }
	 while(in_y<0 || in_y>dimension-1)
	 {
	 	cout<<"\nInvalid Input!y-axis can't be negative !Try again:";
	 	cin>>in_y;
	 }
	 while(in_z<0 || in_z>dimension-1)
	 {
	 	cout<<"\nInvalid Input!z-axis can't be negative !Try again:";
	 	cin>>in_z;
	 }
	 cout<<"\nEnter Time:";
	 cin>>time_in;
	 while(time_in!="Present" && time_in!="Future" && time_in!="Past")
	 {
	 	cout<<"\nInvalid Input for time !Try again:";
	 	cin>>time_in;
	 }
	 while(N_moves>0)
	 {
	 	for(int i=0;i<dimension;i++)
		{
			for(int j=0;j<dimension;j++)
			{
				for(int k=0;k<dimension;k++)
				{
					for(int l=0;l<TIME;l++)
					{
						if(*(*(*(*(matrix+i)+j)+k)+l)==1)		
						{
							if(in_x==i && in_y==j && in_z==k)		//calculating scores acc to criteria.
							{
								if(*(time_arr+l)==time_in)
								{
									score+=1;
								}
								else
								score+=0.5;
							}
						}	
					}
				}
			}
		}
		distance(matrix,time_arr,dimension,TIME,in_x,in_y,in_z);
		N_moves--;
		if(N_moves!=0)
		{
			cout<<"\nEnter Location Again:";
			cin>>in_x>>in_y>>in_z;
			 while(in_x<0 || in_x>dimension-1)
			 {
			 	cout<<"\nInvalid Input!x-axis can't be negative !Try again:";
			 	cin>>in_x;
			 }
			 while(in_y<0 || in_y>dimension-1)
			 {
			 	cout<<"\nInvalid Input!y-axis can't be negative !Try again:";
			 	cin>>in_y;
			 }
			 while(in_z<0 || in_z>dimension-1)
			 {
			 	cout<<"\nInvalid Input!z-axis can't be negative !Try again:";
			 	cin>>in_z;
			 }
		 	cout<<"\nEnter Time:";
		 	cin>>time_in;
		 	while(time_in!="Present" && time_in!="Future" && time_in!="Past")
			 {
			 	cout<<"\nInvalid Input for time !Try again:";
			 	cin>>time_in;
			 }
		}
		else
		{
			system("clear");
			cout<<"\nOOPS!Out of moves.\n";
		}
	 	
	 }
	 return score;
	 
}
void distance(int ****matrix,string *time_arr,int dimension,const int TIME,int in_x,int in_y,int in_z)
{
	int reward=0;
	int distance=0;
	for(int i=0;i<dimension;i++)
	{
		for(int j=0;j<dimension;j++)
		{
			for(int k=0;k<dimension;k++)
			{
				for(int l=0;l<TIME;l++)
				{
					if(*(*(*(*(matrix+i)+j)+k)+l)==1)		
					{
						distance=sqrt(pow(i-in_x,2)+pow(j-in_y,2)+pow(k-in_z,2));   		//calculating distance of rewards from locations.
						cout<<"Reward_"<<++reward<<":Distance is "<<distance<<endl;
					}	
				}
			}
		}
	}
}

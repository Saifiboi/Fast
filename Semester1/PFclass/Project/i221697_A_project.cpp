#include <iostream>
#include<random>
#include <ctime>
#include<iomanip>
#include<stdio.h>
#include<fstream>
#include<string>
#include<cmath>


using namespace std;


void readport(int [],float &,float &,string &,int );
void crteport(char[][100],char name[][255],float [],float [],int [],float &,float &,int,string &);
void str_cnvrtr(string ,char [][100],char[][255],float [],int);
int intretrn(char);
int topstock(float [],float [],int);
int lowstock(float [],float [],int);
float highcalc(float );
float lowcalc(float );
void remmoney(float &);
void addmoney(float &);
void addstock(int &,int,float [],float &,int []);
void remstock(int &,int,float [],float &,int []);
void redrawMarket(float [],float [],const int,int &,char [][100],char [][255]);
int lengthcalc(char []);
char getch() ;
void showportfolio(float [],float [],int,int [],int &,float &,float &,char[][100],char[][255],float [],float &,string &);



int main()
{
	string usrname="\0";	
	ifstream fin;
	ifstream fin1;
	ofstream fout;
	fin.open("Companies.txt");
	string str;
	getline(fin,str);
	fin1.open("portfolio.txt");
	
	const int COMPANIES=37;
	static int shares[COMPANIES]={0},total_tradedshares=0;
	int i=0;
	float price[COMPANIES]={100,1000,2000},prev[COMPANIES],prev_blance=0,new_blance=0;
	 static char ch;
	char symbol[COMPANIES][100]={"ogdc\0","ppl\0","pol\0"},
	name[COMPANIES][255]={"Oil & Gas Dev. Comp Ltd","Pakistan Petroleum Limited","Pakistan oilfeilds limited"};
	float gainloss[COMPANIES]={0},totlgain=0;
	
	
	for(int i=0;i<COMPANIES;i++)
	{
		getline(fin,str);
		str_cnvrtr(str,symbol,name,price,i);
	}
	fin.close();
	
	srand(time(0));
	redrawMarket(price,prev,COMPANIES,total_tradedshares,symbol,name);
	
	while(ch!='e' && ch!='E')
	{
		
		ch = getch();
		switch(ch)
		{
			
			case 'a':
			case'A':
			
				prev_blance=new_blance;
				addstock(total_tradedshares,COMPANIES,price,new_blance,shares);
				redrawMarket(price,prev,COMPANIES,total_tradedshares,symbol,name);
				cin.ignore();
				break;
				
				
			case 'r':
			case'R':
			
				prev_blance=new_blance;
				remstock(total_tradedshares,COMPANIES,price,new_blance,shares);
				redrawMarket(price,prev,COMPANIES,total_tradedshares,symbol,name);
				cin.ignore();
				break;
				
				
			case 'm':
			case'M':
			
			
				prev_blance=new_blance;
				addmoney(new_blance);
				cin.ignore();
				redrawMarket(price,prev,COMPANIES,total_tradedshares,symbol,name);
				break;
				
				
			case 'w':
			case'W':
			
			
				prev_blance=new_blance;
				remmoney(new_blance);
				cin.ignore();
				redrawMarket(price,prev,COMPANIES,total_tradedshares,symbol,name);
				break;
				
				
			case 'e':
			case'E':
			
				crteport(symbol,name,price, prev,shares,new_blance,prev_blance,COMPANIES,usrname);
				readport(shares,new_blance,prev_blance,usrname,COMPANIES);
				//crteport(symbol,name,price, prev,shares,new_blance,prev_blance,COMPANIES,usrname);
				fout.open("Companies.txt");
				fout<<"symbol,Company name,Stock Price"<<endl;
				
				for (int i=0 ;i<COMPANIES;i++)
				{
					fout<<symbol[i]<<","<<name[i]<<","<<setprecision(2)<<fixed<<price[i]<<endl;
				}
				fout.close();
				break;
				
				
			case 'p':
			case'P':
			
			
				if(!fin1)
					{
						crteport(symbol,name,price, prev,shares,new_blance,prev_blance,COMPANIES,usrname);
						readport(shares,new_blance,prev_blance,usrname,COMPANIES);
						
						showportfolio(price,prev,COMPANIES,shares,total_tradedshares,prev_blance,
						new_blance,symbol,name,gainloss,totlgain,usrname);
					}
				else
					{
						
						readport(shares,new_blance,prev_blance,usrname,COMPANIES);
						showportfolio(price,prev,COMPANIES,shares,total_tradedshares,
						prev_blance,new_blance,symbol,name,gainloss,totlgain,usrname);
					}
				redrawMarket(price,prev,COMPANIES,total_tradedshares,symbol,name);
				break;
			case ' ':
				
					redrawMarket(price,prev,COMPANIES,total_tradedshares,symbol,name);
					break;
			default:
				cout<<"\033[1;31m"<<"Invalid Input!\n"<<"\033[0m";
		
		}
		
	}
}

void redrawMarket(float price[],float prev[],int COMPANIES,int &total_tradedshares,char symbol[][100],char name[][255])
{

	system("clear");
	static bool check=0;
	const 	float  MINIMUM=0.0;
	static float highest[100],lowest[100];	
	int index,index2;
	int length=0;
	
	
	
	cout<<"\033[1;44m"<<"\033[1;38m"<<setw(90)<<"KARACHI STOCK MARKET (LIVE)"<<setw(64)<<"\033[0m"<<endl;	//creating headings of live market.
	cout<<setw(150)<<setfill('*')<<""<<endl;
	cout<<"\033[1;40m"<<"\033[1;33m"<<"Show Updates(Space)"<<setw(6)<<setfill(' ')<<""<<"Show portfolio:P"<<setw(6)<<""<<"Add Stock:A"<<setw(6)<<""<<"Remove Stock:R"<<setw(6)<<""<<"Add money to account:M"<<setw(6)<<""<<"Withdraw money from account:W"<<setw(6)<<""<<"Exit:E"<<setw(4)<<""<<"\033[1;0m"<<endl;
	cout<<setw(150)<<setfill('*')<<""<<endl;
	cout<<"\033[1;36m"<<"Stocks     |"<<setw(51)<<setfill(' ')<<"Company Name|"<<setw(21)<<"Previous price|"<<setw(21)<<"Current price|"<<setw(21)<<
	"High|"<<setw(21)<<"Low|"<<"\033[0m"<<endl;
	
	
	
	if(check==0)		// at start of session initialing the high and low values. 
	{
		for(int i=0;i<COMPANIES;i++)
		{
			highest[i]=price[i];
			lowest[i]=price[i];
		}
		check=1;
	}
	for(int i=0;i<COMPANIES;i++)
	{
		prev[i]=price[i];
		float high=highcalc(prev[i]);			//calculating upper and lower bound of random number.
		float low=lowcalc(prev[i]);
		length=lengthcalc(symbol[i]);
		
		
		do{
			price[i]=low+static_cast<float>(rand())*static_cast<float>(high-low)/RAND_MAX;		//generating random float number in specified domain.
		}while(price[i]<MINIMUM);		//checking random number should be greater than 0.
		
		
		if(price[i]>highest[i])
		{
			highest[i]=price[i];		//updating the highest and lowest price in session.
		}
		else if(price[i]<lowest[i])
		{
			lowest[i]=price[i];	
		}
		if(price[i]>prev[i])			//dispalying result in livescreen depending on price is increased or decreased.
		{
			if(i+1<=9)
			{
				cout<<i+1<<"."<<symbol[i]<<setw(10-(length+1))<<"|"<<
				setw(50)<<name[i]<<"|"<<setw(20)<<prev[i]<<"|"<<setw(20)<<fixed<<setprecision(2)<<"\033[0;32m"<<price[i]<<"\u2191"<<"\033[0m"<<"|"<<right<<
				setw(20)<<highest[i]<<"|"<<setw(20)<<lowest[i]<<"|"<<endl;
			}
			else
			{
				
				cout<<i+1<<"."<<symbol[i]<<setw(9-(length+1))<<"|"<<
				setw(50)<<name[i]<<"|"<<setw(20)<<prev[i]<<"|"<<setw(20)<<fixed<<setprecision(2)<<"\033[0;32m"<<price[i]<<"\u2191"<<"\033[0m"<<"|"<<
				setw(20)<<highest[i]<<"|"<<setw(20)<<lowest[i]<<"|"<<endl;
			}
		}
		else
		{
			if(i+1<=9)
				{
					cout<<i+1<<"."<<symbol[i]<<setw(10-(length+1))<<"|"<<
					setw(50)<<name[i]<<"|"<<setw(20)<<prev[i]<<"|"<<setw(20)<<fixed<<setprecision(2)<<"\033[0;31m"<<price[i]<<"\u2193"<<"\033[0m"<<"|"<<
					setw(20)<<highest[i]<<"|"<<setw(20)<<lowest[i]<<"|"<<endl;
				}
				else
				{
					
					cout<<i+1<<"."<<symbol[i]<<setw(9-(length+1))<<"|"<<
					setw(50)<<name[i]<<"|"<<setw(20)<<prev[i]<<"|"<<setw(20)<<fixed<<setprecision(2)<<"\033[0;31m"<<price[i]<<"\u2193"<<"\033[0m"<<"|"<<
					setw(20)<<highest[i]<<"|"<<setw(20)<<lowest[i]<<"|"<<endl;
				}
		}
			
	
	
	
	}
	index=topstock(price,lowest,COMPANIES);
	index2=lowstock(price,highest,COMPANIES);
	cout<<setw(150)<<setfill('*')<<""<<endl;
	
	
	cout<<endl<<"\033[1;35m"<<"Top shares traded today"<<			//dispalying total traded shares in session.
	"\033[0m"<<setw(20)<<setfill(' ')<<"|"<<"\033[1;35m"<<
	total_tradedshares<<"\033[0m";
	
	
	cout<<endl<<"\033[1;32m"<<"Top % advancer symbol  "<<			//dispalying stock whose value increase the most in session.
	"\033[0m"<<setw(20)<<setfill(' ')<<"|"<<"\033[1;32m"<<
	symbol[index]<<"\033[0m";
	
	
	cout<<endl<<"\033[1;31m"<<"Top % decliner symbol  "<<
	"\033[0m"<<setw(20)<<setfill(' ')<<"|"<<"\033[1;31m"<<			//dispalying stock whose value increase the least in session.
	symbol[index2]<<"\033[0m"<<endl;
		
	
}

int lengthcalc(char str[])				//function calculating the length of a string.
{
	int counter=-1,i=0;
	while(str[i]!='\0')
	{
		
		i++;
		counter++;
	}
	return counter;
}
char getch(void)				//function to take input a single character.
{ 
 // Set terminal to raw mode 
  system("stty raw"); 

  // Wait for single character 
  char input = getchar(); 
  // Reset terminal to normal "cooked" mode 
  system("stty cooked"); 
  return input; 
}




void showportfolio( float price[],float prev[],  int Companies,int shares[],
int &total_tradedshares,float &prev_blance,float &new_blance,char symbol[][100],			//function to draw portfolio screen.
char name[][255],float gainloss[],float &totlgain,string &usrname)
{

	system("clear");
	bool check=0;
	const float MINIMUM=0.0;
	const int COMPANIES=Companies;
 	int length;
 	char ch;
 	
 	//Below drawing the headings.
	cout<<"\033[1;44m"<<"\033[1;38m"<<setfill(' ')<<setw(70)<<"Portfolio Owner:"<<usrname<<" (LIVE)"<<setw(54)<<"\033[0m"<<endl;
	cout<<setw(157)<<setfill('*')<<""<<endl;
   	cout<<"\033[1;40m"<<"\033[1;33m"<<"Live Market:L"<<setw(5)<<setfill(' ')<<""<<"Add Stock:A"<<setw(5)<<""<<"Remove Stock:R"<<setw(5)<<""<<"Add money to account:M"<<setw(5)<<""<<"Withdraw money from account:W"<<setw(5)<<""<<"Exit:E"<<"\033[1;0m"<<endl;
	cout<<setw(157)<<setfill('*')<<""<<endl;
	cout<<"\033[1;36m"<<"Stocks     |"<<setw(51)<<setfill(' ')<<"Company Name|"<<setw(21)<<"Shares|"<<setw(21)<<"Current price|"<<setw(21)<<"Previous price|"<<setw(20)<<"Gain Or Loss|"<<"\033[0m"<<endl;
	
	
	
	for(int i=0;i<COMPANIES;i++)
	{
		gainloss[i]=((price[i]-prev[i]) * shares[i]);					//calcualting gain or loss of buyed stocks in as session.
		if(shares[i]==0)												//dispalying only the buyed stocks.
		{
			continue;
		}
		length=lengthcalc(symbol[i]);
		if(gainloss[i] < MINIMUM)									//dispalying data according to gain or loss of values.
		{	
			cout<<i+1<<"."<<symbol[i]<<setw(9-length)<<"|"<<setw(50)<<name[i]<<"|"<<setw(20)<<shares[i]<<"|"<<setw(20)<<fixed<<setprecision(2)<<price[i]<<"|"<<setw(20)<<prev[i]<<"|"<<setw(20)<<"\033[0;31m"<<gainloss[i]<<"\033[0m"<<"|"<<endl;
		}
		else
		{
					cout<<i+1<<"."<<symbol[i]<<setw(9-length)<<"|"<<setw(50)<<name[i]<<"|"<<setw(20)<<shares[i]<<"|"<<setw(20)
					<<fixed<<setprecision(2)<<price[i]<<"|"<<setw(20)<<prev[i]<<"|"<<setw(20)<<"\033[0;32m"<<"+"<<gainloss[i]<<
					"\033[0m"<<"|"<<endl;
		}
	}
	for(int i=0;i<Companies;i++)
	{
		totlgain+=gainloss[i];				//calculating totla gain or loss
	}
	cout<<setw(147)<<setfill('*')<<""<<endl;
	if (totlgain>MINIMUM)
	{
		cout<<"\033[1;37m"<<"\nToday's gain or loss (Rs) "<<setw(20)<<setfill(' ')<<"|"<<"\033[1;32m"<<totlgain<<"\033[0m";		//displaying total gain or loss.
	}
	else
	{
		cout<<"\033[1;37m"<<"\nToday's gain or loss (Rs) "<<setw(20)<<setfill(' ')<<"|"<<"\033[1;31m"<<totlgain<<"\033[0m";		//displaying total gain or loss.
	}
	cout<<"\033[1;37m"<<"\nPrevious Balance (Rs)     "<<setw(20)<<setfill(' ')<<"|"<<"\033[1;32m"<<prev_blance<<"\033[0m";	//displaying previous balance.
	cout<<"\033[1;37m"<<"\nNew Balance (Rs)          "<<setw(20)<<setfill(' ')<<"|"<<"\033[1;32m"<<new_blance<<"\033[0m"<<endl;	//displaying new balance.
		
		while(check!=1)
		{
			ch=getch();
			switch(ch)		//switch for calling functions according to input character.
			{
				case 'L':
				case'l':
				
					check=1;
					crteport(symbol,name,price, prev,shares,new_blance,prev_blance,COMPANIES,usrname);
					break;
					
				case 'a':
				case'A':
				
					check=1;
					prev_blance=new_blance;
					addstock(total_tradedshares,COMPANIES,price,new_blance,shares);
					cin.ignore();
					showportfolio(price,prev,COMPANIES,shares,total_tradedshares
					,prev_blance,new_blance,symbol,name,gainloss,totlgain,usrname);
					break;
					
				case 'r':
				case'R':
				
				
					check=1;
					prev_blance=new_blance;
					remstock(total_tradedshares,COMPANIES,price,new_blance,shares);
					cin.ignore();
					showportfolio(price,prev,COMPANIES,shares,total_tradedshares,
					prev_blance,new_blance,symbol,name,gainloss,totlgain,usrname);
					break;
					
					
				case 'm':
				case'M':
				
					check=1;
					prev_blance=new_blance;
					addmoney(new_blance);
					cin.ignore();
					showportfolio(price,prev,COMPANIES,shares,total_tradedshares,
					prev_blance,new_blance,symbol,name,gainloss,totlgain,usrname);
					break;
					
				case 'w':
				case'W':
				
					check=1;
					prev_blance=new_blance;
					remmoney(new_blance);
					cin.ignore();
					showportfolio(price,prev,COMPANIES,shares,total_tradedshares,
					prev_blance,new_blance,symbol,name,gainloss,totlgain,usrname);
					break;
				case 'e':
				case'E':
				
					check=1;
					crteport(symbol,name,price, prev,shares,new_blance,prev_blance,COMPANIES,usrname);
					break;
			
				default:
					cout<<"\033[1;31m"<<"Invalid Input!\n"<<"\033[0m";
			
			}
		}

}
void addstock(int &total_shares,int COMPANIES,float price[],float &new_blance,int shares[])				//function for buying stocks.
{
	system("clear");
	float numstock=0,sharebuy=0;
	cout<<setw(40)<<"\033[1;40m\033[1;33m"<<setw(80)<<"Welcome to Shares Purchasing Portal!!"<<setw(40)<<"\033[0m"<<endl;
	cout<<"\nEnter the number of Stock you want to buy:";				//taking index of stock which user want to buy.
	cin>>numstock;
	while(numstock>COMPANIES || numstock<0)			//below all whiles are validating input.
	{
		cout<<"\033[0;31m"<<"\nInvalid Input!Try Again:"<<"\033[0m";
		cin>>numstock;
	}
	while(numstock!=static_cast<int>(numstock))
	{
		cout<<"\033[0;31m"<<"\nInvalid Input!stock number cant be float!Try Again:"<<"\033[0m";
		cin>>numstock;
	}
	cout<<"\nEnter the number of shares you want to buy:";			//Taking number of shares user want to buy.
	cin>>sharebuy;
	
	while(sharebuy<0)				//validating input.
	{
		cout<<"\033[0;31m"<<"\nInvalid Input!Try Again:"<<"\033[0m"<<"\033[0m";
		cin>>sharebuy;
	}
	while(sharebuy!=static_cast<int>(sharebuy))
	{
		cout<<"\033[0;31m"<<"\nInvalid Input! shares can't be float!Try Again:"<<"\033[0m";
		cin>>sharebuy;
	}
	while(new_blance< price[static_cast<int>(numstock)-1]*sharebuy)
	{
		cout<<"\033[0;31m"<<"\nNot sufficient balance !try for less number of shares or 0 to exit:"<<"\033[0m";
		cin>>sharebuy;
	}
	new_blance-=price[static_cast<int>(numstock)-1]*sharebuy;			//removing price from balance.
	shares[static_cast<int>(numstock)-1]+=sharebuy;						//adding shares to buyes shares array.
	total_shares+=sharebuy;												//adding shares to total shares traded.
	cout<<"\nShares Bought sucessfully!\n";
	
}
void remstock(int &total_shares,int COMPANIES,float price[],float &new_blance,int shares[])			//function for removing stocks.
{
	system("clear");
	float numstock=0,sharesell=0;
	cout<<setw(40)<<"\033[1;40m\033[1;33m"<<setw(80)<<"Welcome to Shares Selling Portal!!"<<setw(40)<<"\033[0m"<<endl;
	cout<<"\nEnter the  index number of Stock you want to sell:";		//taking index of stock which user want to sell.
	cin>>numstock;
	while(numstock>COMPANIES || numstock<0)								//below all whiles are validating input.
	{
		cout<<"\033[1;31m"<<"Invalid Input!Try again:"<<"\033[0m";
		cin>>numstock;
	}
	while(numstock!=static_cast<int>(numstock))
	{
		cout<<"\033[1;31m"<<"\nInvalid Input!stock number cant be float!Try Again:"<<"\033[0m";
		cin>>numstock;
	}
	cout<<"\nEnter the number of  integer shares you want to sell:";		//Taking number of shares user want to sell.
	cin>>sharesell;
	while(sharesell<0)		//validating input.
	{
		cout<<"\033[1;31m"<<"\nInvalid Input! shares can't be negative !Try Again:"<<"\033[0m";
		cin>>sharesell;
	}
	while(sharesell!=static_cast<int>(sharesell))
	{
		cout<<"\033[1;31m"<<"\nInvalid Input! shares can't be float!Try Again:"<<"\033[0m";
		cin>>sharesell;
	}
	while(sharesell>shares[static_cast<int>(numstock)-1])
	{
		cout<<"\033[1;31m"<<"Shares are out of bound !try again or enter 0 to exit!:"<<"\033[0m";
		cin>>sharesell;
	}
	new_blance+=price[static_cast<int>(numstock)-1]*sharesell;				//adding price to  balance.
	shares[static_cast<int>(numstock)-1]-=sharesell;						//removing shares from buyes shares array.
	total_shares+=sharesell;												//adding shares to total shares traded.
	cout<<"\nShares sold sucessfully!\n";
	
}
void addmoney(float &new_blance)				//function for depositing money.
{
	
	system("clear");
	cout<<setw(40)<<"\033[1;40m\033[1;33m"<<setw(80)<<"Welcome to Cash Depositing Portal!!"<<setw(40)<<"\033[0m"<<endl;
	float amount;
	cout<<"\nEnter the amount you want to deposit:";				//taking amount of money user want to deposit.
	cin>>amount;
	while(amount<0.0)				//validating input.
	{
		cout<<"\033[1;31m"<<"\nInvalid input amount can't be negative!Try Again:"<<"\033[0m";
		cin>>amount;
	}
	new_blance+=amount;				//adding amount to balance.
	cout<<"\nAmount Deposited successfully!\n";

}
void remmoney(float &new_blance)		//function for withdrawing money.
{
	system("clear");
	float amount;
	cout<<setw(40)<<"\033[1;40m\033[1;33m"<<setw(80)<<"Welcome to Cash Withdrawal Portal!!"<<setw(40)<<"\033[0m"<<endl;
	cout<<"\nEnter the amount you want to Withdraw:";			//taking amount of money user want to withdraw.
	cin>>amount;
	
	while(amount>new_blance || amount<0.0)			//validating input.
	{
		cout<<"\033[1;31m"<<"\nValue is negative or greater than balance !try again with correct value:"<<"\033[0m";
		cin>>amount;
	}
	new_blance-=amount;						//removing amount from balance.
	cout<<"\nAmount Withdrawn successfully!\n";
}
float highcalc(float prev)				//function to calculate upper bound of random price.
{
	return prev+(0.015*prev)+0.01;
}
float lowcalc(float prev)				//function to calculate lower bound of random price.
{
	return prev-(0.015*prev)+0.01;
}
int topstock(float price[],float lowest[],int COMPANIES)		//function will return index of stock whose value has increased maximumly after refreshing.
{
	float higher;
	int index=0;
	higher=(price[0]-lowest[0])/price[0];
	for(int i=1;i<COMPANIES;i++)
	{
		if(((price[i]-lowest[i])/price[i])>higher)
			index=i;
	}
	return index;
}
int lowstock(float price[],float highest[],int COMPANIES)		//function will return index of stock whose value has decreased maximumly after refreshing.
{
	float lower;
	int index=0;
	lower=(highest[0]-price[0])/price[0];
	for(int i=1;i<COMPANIES;i++)
	{
		if(((highest[i]-price[i])/price[i])>lower)
			index=i;
	}
	return index;
}
void str_cnvrtr(string str,char symbol[][100],char name[][255],float price[],int row)			//function which convert string price to float.
{
	char fmoney[30];
	int j=0,k=0,length;
	while(str[j]!=',')
	{
		symbol[row][k]=str[j];
		j++;
		k++;
	}
	j++;
	k=0;
	while(str[j]!=',')
	{
		name[row][k]=str[j];
		j++;
		k++;
	}
	j++;
	k=0;
	
	while(str[j]!='\0')
	{
		fmoney[k]=str[j];
		j++; 
		k++;	
	}
	length=lengthcalc(fmoney);
	int i=0,point=0,intrec,afterpoint;
	float sum=0.0,sumafpt=0.0,l=0;
	while(fmoney[i]!='.' && fmoney[i]!='\0')
	{
		point=i;
		i++;
	}
	i=0;
	
	l=afterpoint;
	if((length)==(point))
	{
		
		while(fmoney[i]!='\0')
		{
			intrec=intretrn(fmoney[i]);
			sum+=(intrec*pow(10,point-1));
			point--;
			i++;
		}		
	}
	else
	{
		afterpoint=(length)-(point+2);
		l=afterpoint;
		while(fmoney[i]!='.')
		{
			intrec=intretrn(fmoney[i]);
			sum+=intrec*pow(10,point);
			point--;
			i++;
		}
		i++;
		while(fmoney[i]!='\0')
		{
			intrec=intretrn(fmoney[i]);
			sumafpt+=(intrec)*(pow(10,l-2));
			l--;
			i++;
		}
		sumafpt=sumafpt/pow(10,afterpoint-1);
		sum=sum+sumafpt;
	}
	price[row]=sum;
}
int intretrn(char ch)					//function which convert char into int.
{
	switch(ch)
	{
		case '1':
			return 1;
			break;
		case '2':
			return 2;
			break;
		case '3':
			return 3;
			break;
		case '4':
			return 4;
			break;
		case '5':
			return 5;
			break;
		case '6':
			return 6;
			break;
		case '7':
			return 7;
			break;
		case '8':
			return 8;
			break;
		case '9':
			return 9;
			break;
		case '0':
			return 0;
			break;
	}
	return 0;

}
void crteport(char symbol[][100],char name[][255],float price[],float prev[],int shares[],float &new_balance,
float &prev_balance,int Companies,string &usrname)			//function to write in portfolio file same as portfolio screen.
{
	int length=0;
	system("clear");
	if(usrname=="\0")
	{
	 	cout<<"\nYou are a new user\n";
	 	cout<<"\nEnter Your Name to create your portfolio:";
	 	getline(cin,usrname);
	 }
 	ofstream fout;
 	fout.open("portfolio.txt");
 	fout<<setw(157)<<setfill('*')<<""<<endl;
 	fout<<setw(70)<<setfill(' ')<<"Portfolio Owner:"<<usrname<<endl;
	fout<<setw(157)<<setfill('*')<<""<<endl;
 	fout<<"Stocks     |"<<setw(41)<<setfill(' ')<<"Company Name|"<<setw(21)<<"Shares|"<<setw(21)<<"Current price|"<<setw(21)<<"Previous price|"<<endl;
 	for(int i=0;i<Companies;i++)
	{
		if(shares[i]==0)
		{
			continue;
		}
		length=lengthcalc(symbol[i]);
		fout<<i+1<<"."<<symbol[i]<<setw(10-length)<<"|"<<setw(40)<<name[i]<<"|"<<setw(20)<<shares[i]<<"|"<<setw(20)<<fixed<<setprecision(2)<<price[i]<<"|"<<setw(20)<<prev[i]<<"|"<<endl;
 	}
 	fout<<setw(121)<<setfill('*')<<"|"<<endl;
	fout<<"Previous Balance (Rs)     "<<setw(20)<<setfill(' ')<<"|"<<prev_balance;
	fout<<"\nNew Balance (Rs)          "<<setw(20)<<setfill(' ')<<"|"<<new_balance<<endl;
	fout.close();
}
void readport(int shares[],float &new_balance,float &prev_balance,string &usrname,int companies)		//function to read from portfolio file.
{
	string str;
	char ch;
	int index;
	int sher;
	ifstream fin;
	fin.open("portfolio.txt");
	getline(fin,str);
	getline(fin,str,':');
	getline(fin,usrname);
	getline(fin,str);
	getline(fin,str);
	getline(fin,str,'|');
	while(1){
		if(str[0]=='*'){
			break;
		}else{
			index = intretrn(str[0]);
			getline(fin,str,'|');
			fin>>sher;
			shares[index-1]=sher;
			getline(fin,str);
		}
		getline(fin,str,'|');
	
	
	}
	
	getline(fin,str,'|');
	fin>>sher;
	prev_balance=sher;
	getline(fin,str,'|');
	fin>>sher;
	new_balance=sher;
	
	
	fin.close();
	
	
}
	



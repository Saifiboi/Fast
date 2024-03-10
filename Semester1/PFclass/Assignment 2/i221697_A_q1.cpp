/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>

using namespace std;

int main()
  {
	const int capacity=1550;
	int curr_mnth, curr_year, inc_rate, dec_rate, curr_level ;
	cout<< "\nCalculating  Tarbela Dam Level!\n";
	cout<< "\nEnter current level with increment or decrement of this month:";
	cin >> curr_level;
	cout<< "\nEnter current month:";
	cin >> curr_mnth;
	cout<< "\nEnter current Year:";
	cin >> curr_year;
	cout<< "\nEnter Increase Rate in march-august:";
	cin >> inc_rate;
	cout<< "\nEnter Decrease Rate in september-february:";
	cin >> dec_rate;
	
	
	if(dec_rate>0 && inc_rate>0 && curr_mnth>0 && curr_year>0 && curr_level>0)		//checking inputs are valid.
	{ 	
		if(dec_rate>inc_rate)			//case leading towards 0 value.
			{	
			 while (curr_level>0)		//decreases the waterlevel unit it reaches to 0.
				{
					if(curr_mnth==1)	
	  					if(curr_level>(2*dec_rate))		//if waterlevel after decrease of 2 month is greater than 0.
	  						{
	  							curr_level-=(2*dec_rate);
	  							curr_mnth=3;
	  						}
	  					else if(curr_level==(2*dec_rate)) // if water level is decreased to 0 in 2 months.
	  					        {
	  							curr_level-=(2*dec_rate);
	  							curr_mnth=2;
	  						} 
	  					else  						//if water level is decreased to 0 in 1 month.
	  						{
	  							curr_mnth=1;
	  							curr_level=0;
	  						}
	  						
	  						
	  				else if(curr_mnth==2)
	  				
	  					if(curr_level>dec_rate)		//if water level is greater than 0 after decrease of a month.
	  						{
	  							curr_level-=dec_rate;
	  							curr_mnth=3;
	  						}
	  					else  
	  						{
	  							curr_mnth=2;
	  							curr_level=0;
	  				
	  						}
	  						
	  						
					else if (curr_mnth>=3 && curr_mnth<=8)
						{
							if(capacity>=((9-curr_mnth)*inc_rate)+curr_level)	//if increase of 6 months is less than dam capacity.
								curr_level+= (9-curr_mnth)*inc_rate;
							else
								curr_level=1550; 
							curr_mnth=9;
						}
						
						
				    else if ( curr_mnth>8 && curr_mnth<=12)					
	  					{
	  					
	  						if(curr_level>(13-curr_mnth)*dec_rate)			//if water level is greater than 0 after decrease of 4 months.
	  							{
	  								curr_level=curr_level-(13-curr_mnth)*dec_rate;
	  								curr_mnth=1;
	  								curr_year+=1;
	  							}
		  					else if(curr_level==(13-curr_mnth)*dec_rate)	//if level reaches to 0 in 4 months.
		  						{
		  							curr_mnth=12;
		  							curr_level=0;
		  						}
		  					else if(curr_level>=(12-curr_mnth)*dec_rate)	//if level reaches to 0 in 3 months.
		  						{
		  							curr_mnth=11;
		  							curr_level=0;
		  						}
		  					else if(curr_level>=(11-curr_mnth)*dec_rate)	//if level reaches to 0 in 2 months.
		  						{
		  							curr_mnth=10;
		  							curr_level=0;
		  						}
		  					else if(curr_level>=(10-curr_mnth)*dec_rate)	//if level reaches to 0 in 1 month.
		  						{
		  							curr_mnth=9;
		  							curr_level=0;
		  						}   
	  					}
	  			}
	  				
	  				cout<<"\nThe Dam will reach 0 in "<<curr_mnth<<"-"<<curr_year<<endl;
	  		}
	  		
	  		
	  		
	  		else if(inc_rate>dec_rate)			//In this case water will leads towards maximum level.
	  			{
	  				while(curr_level<1550)		//Increases water level until it reaches to maximum capacity.
	  					{
	  						if (curr_mnth<3 &&curr_mnth>0)
		  						{
		  							if((curr_level-(3-curr_mnth)*dec_rate)>0)	//if decrase of 2 months is greater than 0.
		  							
		  								curr_level-=(3-curr_mnth)*dec_rate;
		  							else					
		  								curr_level=0;
		  							curr_mnth=3;
		  						}
		  						
		  						
	  						else if (curr_mnth>8 && curr_mnth<=12)
		  						{
		  							if((curr_level-(13-curr_mnth)*dec_rate)>0)    //if decrease of 4 months is greater than 0.
		  								curr_level-=(13-curr_mnth)*dec_rate;
		  							else
		  								curr_level=0;
		  							curr_mnth=1;
		  							curr_year+=1;
	  							}
	  							
	  							
	  						else if (curr_mnth>=3 && curr_mnth<=8)
	  							{
		  							if((curr_level+(9-curr_mnth)*inc_rate)<capacity)	//if increase of 6 months is less than capacity.
		  								{
		  									curr_level=curr_level+(9-curr_mnth)*inc_rate;
		  									curr_mnth=9;
		  								}
		  							else if((curr_level+(9-curr_mnth)*inc_rate)==capacity)		//if increase of 6 months is equal to capacity.
		  								{
		  									curr_mnth=8;
		  									curr_level=1550;
		  								}
		  							else if((curr_level+(8-curr_mnth)*inc_rate)<=capacity)		//if increase of 5 months reaches to maximum capacity.
		  								{
		  									curr_mnth=7;
		  									curr_level=1550;
		  								}
		  							else if((curr_level+(7-curr_mnth)*inc_rate)<=capacity)		//if increase of 4 months reaches to maximum capacity.
		  								{
		  									curr_mnth=6;
		  									curr_level=1550;
		  								}
		  							else if((curr_level+(6-curr_mnth)*inc_rate)<=capacity)		//if increase of 3 months reaches to maximum capacity.
		  								{
		  									curr_mnth=5;
		  									curr_level=1550;
		  								}
		  								else if((curr_level+(5-curr_mnth)*inc_rate)<=capacity)		//if increase of 2 months reaches to maximum capacity.
		  								{
		  									curr_mnth=4;
		  									curr_level=1550;
		  								}
		  								else if((curr_level+(4-curr_mnth)*inc_rate)<=capacity)		//if increase of 1 month reaches to maximum capacity.
		  								{
		  									curr_mnth=3;
		  									curr_level=1550;
		  								}
		  						}
		  					}
		  					cout<<"\nThe Dam will reach maximum in "<<curr_mnth<<"-"<<curr_year<<endl;
		  		}
	  		else			// if increase and decrease are equal.
	  			cout<<"\nThe decrease and increase rate is same thats why no significant change will occur."<<endl; 
	  		}
	  	else			//if invalid input is given.
	  		cout<<"\nInvalid Input!\n";
  	}
  	
  			
					
					
			

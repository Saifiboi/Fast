/* Name :Saif ur rehman    Student ID: i221697
	Assignment#2*/
#include <iostream>
#include<iomanip>

using namespace std;

int main()
  {
  	int match_num,encl_num,child_tckt,adlt_tckt,tckt_price;
  	long cnic;
  	float discount = 0,total_bill;
  	short fam_check;
  	
  	srand(time(0));
  	
  	cout<<"\nWelcome to Ticket counter!";
  	
  	cout<<"\nPlease Enter your CNIC:";		//taking cnic of user.
  	cin>>cnic;
  	
  
 	 cout<<endl<<setw(90)<<setfill('*')<<"\n";
 	 cout<<endl<<setw(50)<<setfill(' ')<<"MATCH LIST OF PSL:"<<endl<<endl;
 	 
 	 cout<<endl<<"1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium\n(7pm-10.15pm)\n\n2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium\n(8pm-11.15pm)\n\n3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium\n(7pm-10.15pm)\n\n4. 1 Mar 2020 – Islamabad United v Karachi Kings, Pindi Cricket Stadium\n(7pm-10.15pm)\n\n5. 2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium\n(7pm-10.15pm)\n\n6. 5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium\n(7pm-10.15pm)\n\n7. 7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium\n(2pm-5.15pm)\n\n8. 8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium\n(2pm-5.15pm)\n\n";
 	 //line 26 is displaying the match list.
 	 
 	cout<<endl<<"Enter your choice(1-8):";			//taking match number from the user.
 	cin>>match_num;
 	
 	if (match_num>=1&&match_num<=8)				//checking match number is valid.
 	   {
	 	cout<<endl<<setw(90)<<setfill('*')<<"\n";
	 	cout<<endl<<setw(50)<<setfill(' ')<<"ENCLOSURE DETAIL:"<<endl<<endl;
	 	cout<<"Name"<<setw(47)<<"Class"<<setw(20)<<"Price"<<setw(20)<<"Available Seats";
	 	
	 	switch(match_num)			//this switch will display relevant enclosure detail according to given match number.
	 	   {
	 		case 1:
	 			
	 		case 2:
	 			
	 		case 3:
	 			cout<<endl<<"\n1.    Imran khan Enclosure       "<<setw(17)<<right<<"VIP"<<setw(20)<<"3000"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n2. Javed Miandad Enclosure  "<<setw(22)<<right<<"VIP"<<setw(20)<<"3000"<<setw(21)<<rand()%1000+1;
	 			cout<<endl<<"\n3.  Javed Akhter Enclosure "<<setw(23)<<right<<"VIP"<<setw(20)<<"3000"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n4.  Azhar mahmod Enclosure   "<<setw(21)<<right<<"VIP"<<setw(20)<<"3000"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n5. Sohail Tanver Enclosure   "<<setw(21)<<right<<"1st class"<<setw(20)<<"1000"<<setw(20)<<rand()%3000+1;
	 			cout<<endl<<"\n6. Shoaib Akhter Enclosure   "<<setw(21)<<right<<"Premium"<<setw(20)<<"1500"<<setw(20)<<rand()%3000+1;
	 			cout<<endl<<"\n7.   Imran Buksh Enclosure    "<<setw(20)<<right<<"General"<<setw(20)<<" 500"<<setw(20)<<rand()%2500+1;
	 			cout<<endl<<"\n8.  Yasir Arafat Enclosure    "<<setw(20)<<right<<"General"<<setw(20)<<" 500"<<setw(21)<<rand()%2500+1;
	 			break;
	 		case 4:
	 		
	 		case 7:
	 			cout<<endl<<"\n1.    Imran khan Enclosure       "<<setw(17)<<right<<"VIP"<<setw(20)<<"2000"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n2. Javed Miandad Enclosure  "<<setw(22)<<right<<"VIP"<<setw(20)<<"2000"<<setw(21)<<rand()%1000+1;
	 			cout<<endl<<"\n3.  Javed Akhter Enclosure "<<setw(23)<<right<<"VIP"<<setw(20)<<"2000"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n4.  Azhar mahmod Enclosure   "<<setw(21)<<right<<"VIP"<<setw(20)<<"2000"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n5. Sohail Tanver Enclosure   "<<setw(21)<<right<<"1st class"<<setw(20)<<" 500"<<setw(20)<<rand()%3000+1;
	 			cout<<endl<<"\n6. Shoaib Akhter Enclosure   "<<setw(21)<<right<<"Premium"<<setw(20)<<"1000"<<setw(20)<<rand()%3000+1;
	 			cout<<endl<<"\n7.   Imran Buksh Enclosure    "<<setw(20)<<right<<"General"<<setw(20)<<" 250"<<setw(20)<<rand()%2500+1;
	 			cout<<endl<<"\n8.  Yasir Arafat Enclosure    "<<setw(20)<<right<<"General"<<setw(20)<<" 250"<<setw(21)<<rand()%2500+1;
	 			break;
	 		case 5:
	 			
	 		case 6:
	 			
	 		case 8:
	 			cout<<endl<<"\n1.    Imran khan Enclosure       "<<setw(17)<<right<<"VIP"<<setw(20)<<"1500"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n2. Javed Miandad Enclosure  "<<setw(22)<<right<<"VIP"<<setw(20)<<"1500"<<setw(21)<<rand()%1000+1;
	 			cout<<endl<<"\n3.  Javed Akhter Enclosure "<<setw(23)<<right<<"VIP"<<setw(20)<<"1500"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n4.  Azhar mahmod Enclosure   "<<setw(21)<<right<<"VIP"<<setw(20)<<"1500"<<setw(20)<<rand()%1000+1;
	 			cout<<endl<<"\n5. Sohail Tanver Enclosure   "<<setw(21)<<right<<"1st class"<<setw(20)<<" 500"<<setw(20)<<rand()%3000+1;
	 			cout<<endl<<"\n6. Shoaib Akhter Enclosure   "<<setw(21)<<right<<"Premium"<<setw(20)<<"1000"<<setw(20)<<rand()%3000+1;
	 			cout<<endl<<"\n7.   Imran Buksh Enclosure    "<<setw(20)<<right<<"General"<<setw(20)<<" 250"<<setw(20)<<rand()%2500+1;
	 			cout<<endl<<"\n8.  Yasir Arafat Enclosure    "<<setw(20)<<right<<"General"<<setw(20)<<" 250"<<setw(21)<<rand()%2500+1;
	 			break;
	 			
	 		
	 	   }
	 	cout<<"\n\nEnter the Enclosure(1-8):";			//Taking  chosen enclosure number from the user.
	 	cin>>encl_num;
	 	
	 	switch(match_num)					//Applying check on match number.
	 		{
	 		case 1:
	 		case 2:			//27,28 and 29 February.
	 		case 3:
	 			switch(encl_num)		//Applying check on enclosure number in case of first 3 matches.
	 				{
	 				case 1:
	 				case 2:
	 				case 3:			//VIP Enclosures
	 				case 4:
	 			
	 	
					 	cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";	//Taking choice of family or group.
					 	cin>>fam_check;
					 	
					 	if (fam_check==1)							//In case of family.
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";			//Taking number of child tickets.
					 		cin>>child_tckt;
					 		
					 			if(child_tckt>0)					//Checking validity of child tickets.
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";	//Taking number of adult tickets.
					 				cin>>adlt_tckt;
					 				
					 				if(adlt_tckt>0 && adlt_tckt<=4)			//checking validity of adult tickets.
					 					{
					 					tckt_price=child_tckt*3000+adlt_tckt*3000;
					 					discount=0.2*(child_tckt*3000);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else					//error message in case of invalid adult tickets.
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else					//error message in case of invalid child tickets.
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if (fam_check==0)					//in case of group.
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*3000;
					 				if (adlt_tckt>=4)		//checking for discount of adult tickets.
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else					//error message in case of invalid adult tickets.
			 				cout<<"\nInvalid input!\n";
			 			break;
			 			
			 		case 5:						//First Class Enclosure.
			 		
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*1000+adlt_tckt*1000;
					 					discount=0.2*(child_tckt*1000);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*1000;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 		case 6:					//Premium Enclosure.
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*1500+adlt_tckt*1500;
					 					discount=0.2*(child_tckt*1500);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if (fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*1500;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 		case 7:
			 		case 8:						//General Enclosures.
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*500+adlt_tckt*500;
					 					discount=0.2*(child_tckt*500);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*500;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 		default :				//Error message in case of invalid Enclosure Number.
			 			cout<<"\nInvalid Input!\n";
		 			}
		 			
		 		break;
		 		
		 		
		 	case 4:				//1 and 7 March.
		 	case 7:
		 		switch(encl_num)
	 				{
	 				case 1:
	 				case 2:		//VIP Enclosures
	 				case 3:
	 				case 4:
	 			
	 	
					 	cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*2000+adlt_tckt*2000;
					 					discount=0.2*(child_tckt*2000);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*2000;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 			
			 		case 5:			//First Class Enclosure. 
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*500+adlt_tckt*500;
					 					discount=0.2*(child_tckt*500);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*500;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 			
			 			
			 		case 6:			//Premium Enclosure.
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*1000+adlt_tckt*1000;
					 					discount=0.2*(child_tckt*1000);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*1000;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 			
			 		case 7:			//General Enclosures.
			 		case 8:
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*250+adlt_tckt*250;
					 					discount=0.2*(child_tckt*250);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*250;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 		default :
			 				cout<<"\nInvalid Input!\n";
		 			}
		 			
		 		break;
		 		
		 		
		 	case 5:
		 	case 6:			//2,5 and 8 March.
		 	case 8:
		 		switch(encl_num)
	 				{
	 				case 1:
	 				case 2:			//VIP Enclosures.
	 				case 3:
	 				case 4:
	 			
	 	
					 	cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*1500+adlt_tckt*1500;
					 					discount=0.2*(child_tckt*1500);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*1500;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
					 		else
					 			cout<<"\nInvalid Input!\n";
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 			
			 			
			 		case 5:				//First Class Enclosure.
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*500+adlt_tckt*500;
					 					discount=0.2*(child_tckt*500);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*500;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 			
			 		case 6:						//Premium Enclosure.
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*1000+adlt_tckt*1000;
					 					discount=0.2*(child_tckt*1000);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*1000;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 			
			 			
			 		case 7:
			 		case 8:					//General Enclosures.
			 			cout<<"\n\nBuying the tickets for Family?(1 for yes 0 for no):";
					 	cin>>fam_check;
					 	if (fam_check==1)
					 		{
					 		cout<<"\nEnter child's ticket(at least one):";
					 		cin>>child_tckt;
					 			if(child_tckt>0)
					 				{
					 				cout<<"\nEnter Adults Tickets(maximum 4):";
					 				cin>>adlt_tckt;
					 				if(adlt_tckt>0&&adlt_tckt<=4)
					 					{
					 					tckt_price=child_tckt*250+adlt_tckt*250;
					 					discount=0.2*(child_tckt*250);
					 					total_bill=tckt_price-discount;
					 					cout<<"\nThe Total Bill = "<<total_bill<<"\nYup!you have  a discount .\n";
					 					}
					 				else
					 					cout<<"\nInvalid Input!\n";
					 				}
					 			else
					 				cout<<"\nInvalid input!\n";
			 				}
			 			else if(fam_check==0)
			 				{
			 				cout<<"\nEnter Adults Tickets(maximum 8):";
					 		cin>>adlt_tckt;
					 		if(adlt_tckt>0&&adlt_tckt<=8)
					 				{
					 				tckt_price=adlt_tckt*250;
					 				if (adlt_tckt>=4)
					 					discount=0.1*tckt_price;
					 				
					 				total_bill=tckt_price-discount;
					 				cout<<"\nThe Total Bill = "<<total_bill<<"\nDiscounted Amount = "<<discount<<endl;
					 				}
			 				}
			 			else
			 				cout<<"\nInvalid input!\n";
			 			break;
			 		default :
			 				cout<<"\nInvalid Input!\n";
		 			}
		 			
		 		break;
		 	}

 	   }
 	else		//displaying error massage in case of invalid match number.
 	cout<<"Invalid Input!\n";
 		
  }
  	

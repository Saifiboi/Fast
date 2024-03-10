/*srand(time(0));
	char Deg[5][255];
	char name[5][255];
	char Password[5][255];
	strcpy(Deg[0],"Doctor of Medicine (Neurology)");
	strcpy(Deg[1],"Doctor of Medicine (Nephrology)");
	strcpy(Deg[2],"Doctor of Medicine (Gynecology)");
	strcpy(Deg[3],"Doctor of Medicine (Urology)");
	strcpy(Deg[4],"Clinical psychology");
	strcpy(name[0],"Dr Shadat");
	strcpy(name[1],"Dr Ibadat");
	strcpy(name[2],"Dr Adalat");
	strcpy(name[3],"Dr Riasat");
	strcpy(name[4],"Dr Sharafat");
	strcpy(Password[0],"d1@123");
	strcpy(Password[1],"d2@123");
	strcpy(Password[2],"d3@123");
	strcpy(Password[3],"d4@123");
	strcpy(Password[4],"d5@123");


	Doctor D[5]={{1,Password[0],name[0],40,Deg[0]},{2,Password[1],name[1],50,Deg[1]},{3,Password[2],name[2],60,Deg[2]},{4,Password[3],name[3],35,Deg[3]}
	,{5,Password[4],name[4],45,Deg[4]}};
//	Doctor *D1[10][5];
//	int doc_index[10]={0},doc_id[10][5]={0},temp=0;
//	bool check=1;
//	for(int i=0;i<10;i++)
//	{
//		doc_index[i]=rand()%5+1;
//		cout<<"\nDoctor Index:"<<doc_index[i]<<endl;
//		for(int j=0;j<doc_index[i];j++)
//		{
//			temp=rand()%5+1;
//			check=1;
//			for(int k=0;k<j;k++)
//			{
//				if(doc_id[i][k]==temp)
//				{
//					j--;
//					check=0;
//					break;
//				}
//			}
//			if(check==1)
//			{
//				doc_id[i][j]=temp;
//				cout<<"\nDoctor Id:"<<doc_id[i][j]<<"\t";
//				D1[i][j]=&D[doc_id[i][j]-1];
//				cout<<(D1[i][j])->getDoctorId()<<endl;
//			}
//		}
//	}
	EHR E;
	int arr1[4];
	for(int i=0;i<4;i++)
	{
		arr1[i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient1/EHR/EHR"+to_string(i+1)+".dat");
	}
	Doctor *D10[5];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr1[i]==D[j].getDoctorId())
			{
				D10[i]=&D[j];
			}
		}
	}
	int arr2;
	Doctor *D11[5];
	arr2=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient2/EHR/EHR1.dat");
	for(int j=0;j<5;j++)
	{
		if(arr2==D[j].getDoctorId())
		{
			D11[0]=&D[j];
		}
	}
	int arr3[3];
	Doctor *D12[5];
	for(int i=0;i<3;i++)
	{
		arr3[i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient3/EHR/EHR"+to_string(i+1)+".dat");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr3[i]==D[j].getDoctorId())
			{
				D12[i]=&D[j];
			}
		}
	}
	int arr4[5];
	Doctor *D13[5];
	for(int i=0;i<5;i++)
	{
		arr4[i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient4/EHR/EHR"+to_string(i+1)+".dat");
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr4[i]==D[j].getDoctorId())
			{
				D13[i]=&D[j];
			}
		}
	}
	int arr5;
	Doctor *D14[5];
	arr5=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient5/EHR/EHR"+to_string(1)+".dat");
	for(int j=0;j<5;j++)
	{
		if(arr5==D[j].getDoctorId())
		{
			D14[0]=&D[j];
		}
	}
	int arr6[4];
	Doctor *D15[5];
	for(int i=0;i<4;i++)
	{
		arr6[i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient6/EHR/EHR"+to_string(i+1)+".dat");
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr6[i]==D[j].getDoctorId())
			{
				D15[i]=&D[j];
			}
		}
	}
	int arr7[4];
	Doctor *D16[5];
	for(int i=0;i<4;i++)
	{
		arr7[i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient7/EHR/EHR"+to_string(i+1)+".dat");
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr7[i]==D[j].getDoctorId())
			{
				D16[i]=&D[j];
			}
		}
	}
	int arr8[2];
	Doctor *D17[5];
	for(int i=0;i<2;i++)
	{
		arr8[i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient8/EHR/EHR"+to_string(i+1)+".dat");
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr8[i]==D[j].getDoctorId())
			{
				D17[i]=&D[j];
			}
		}
	}
	int arr9;
	Doctor *D18[5];
	arr9=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient9/EHR/EHR"+to_string(1)+".dat");
	for(int j=0;j<5;j++)
	{
		if(arr9==D[j].getDoctorId())
		{
			D18[0]=&D[j];
		}
	}
	int arr10[5];
	Doctor *D19[5];
	for(int i=0;i<5;i++)
	{
		arr10[i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient10/EHR/EHR"+to_string(i+1)+".dat");
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr10[i]==D[j].getDoctorId())
			{
				D19[i]=&D[j];
			}
		}
	}
	//char pass[10]="p1@123";
	cout<<"chk";
	//char plname[30]="sarfraz";
	//char occup[30]="mazdoor";
	Patient l;
	//Patient P(1,"sad","xD",40,"pew",4);
	Patient P[10]={
	{1,"p1@123","Sarfraz Ahmed",40,"Mazdoor",4},
	{2,"p2@123","Babar Azam",40,"Chaprasi",1},
	{3,"p3@123","Shadab khan",40,"Mechanic",3},
	{4,"p4@123","Shaheen Afridi",40,"Carpenter",5},
	{5,"p5@123","Naseem Shah",40,"Mazdoor",1},
	{6,"p6@123","Iftikhar Ahmed",40,"Chaprasi",4},
	{7,"p7@123","Muhammad Rizwan",40,"Mechanic",4},
	{8,"p8@123","Fakhar Zaman",40,"Carpenter",2},
	{9,"p9@123","Imad Wasim",40,"Mazdoor",1},
	{10,"p10@123","Imam-Ul-Haq",40,"Chaprasi",5}
	};
	cout<<P[0].getPatientName()<<endl;
	cout<<P[0].getIndexdoctor();
	P[0].setD(D10,P[0].getIndexdoctor());
	P[1].setD(D11,P[1].getIndexdoctor());
	P[2].setD(D12,P[2].getIndexdoctor());
	P[3].setD(D13,P[3].getIndexdoctor());
	P[4].setD(D14,P[4].getIndexdoctor());
	P[5].setD(D15,P[5].getIndexdoctor());
	P[6].setD(D16,P[6].getIndexdoctor());
	P[7].setD(D17,P[7].getIndexdoctor());
	P[8].setD(D18,P[8].getIndexdoctor());
	P[9].setD(D19,P[9].getIndexdoctor());

//	writeDoctor(D,5);
	//writepatient(P,10);
	
	
	
	char Deg[5][255];
		char name[5][255];
		char Password[5][255];
		strcpy(Deg[0],"Doctor of Medicine (Neurology)");
		strcpy(Deg[1],"Doctor of Medicine (Nephrology)");
		strcpy(Deg[2],"Doctor of Medicine (Gynecology)");
		strcpy(Deg[3],"Doctor of Medicine (Urology)");
		strcpy(Deg[4],"Clinical psychology");
		strcpy(name[0],"Dr Shadat");
		strcpy(name[1],"Dr Ibadat");
		strcpy(name[2],"Dr Adalat");
		strcpy(name[3],"Dr Riasat");
		strcpy(name[4],"Dr Sharafat");
		strcpy(Password[0],"d1@123");
		strcpy(Password[1],"d2@123");
		strcpy(Password[2],"d3@123");
		strcpy(Password[3],"d4@123");
		strcpy(Password[4],"d5@123");


		Doctor D[5]={{1,Password[0],name[0],40,Deg[0]},{2,Password[1],name[1],50,Deg[1]},{3,Password[2],name[2],60,Deg[2]},{4,Password[3],name[3],35,Deg[3]}
		,{5,Password[4],name[4],45,Deg[4]}};
	char contin='Y';
	EHR E;
		int arr1[10][5];
		for(int i=0;i<4;i++)
		{
			arr1[0][i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient1/EHR/EHR"+to_string(i+1)+".dat");
		}
		Doctor *D10[5];
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(arr1[0][i]==D[j].getDoctorId())
				{
					D10[i]=&D[j];
				}
			}
		}
		Doctor *D11[5];
		arr1[1][0]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient2/EHR/EHR1.dat");
		for(int j=0;j<5;j++)
		{
			if(arr1[1][0]==D[j].getDoctorId())
			{
				D11[0]=&D[j];
			}
		}
		Doctor *D12[5];
		for(int i=0;i<3;i++)
		{
			arr1[2][i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient3/EHR/EHR"+to_string(i+1)+".dat");
		}
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(arr1[2][i]==D[j].getDoctorId())
				{
					D12[i]=&D[j];
				}
			}
		}
		Doctor *D13[5];
		for(int i=0;i<5;i++)
		{
			arr1[3][i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient4/EHR/EHR"+to_string(i+1)+".dat");
		}
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(arr1[3][i]==D[j].getDoctorId())
				{
					D13[i]=&D[j];
				}
			}
		}
		Doctor *D14[5];
		arr1[4][0]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient5/EHR/EHR"+to_string(1)+".dat");
		for(int j=0;j<5;j++)
		{
			if(arr1[4][0]==D[j].getDoctorId())
			{
				D14[0]=&D[j];
			}
		}
		Doctor *D15[5];
		for(int i=0;i<4;i++)
		{
			arr1[5][i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient6/EHR/EHR"+to_string(i+1)+".dat");
		}
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(arr1[5][i]==D[j].getDoctorId())
				{
					D15[i]=&D[j];
				}
			}
		}
		Doctor *D16[5];
		for(int i=0;i<4;i++)
		{
			arr1[6][i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient7/EHR/EHR"+to_string(i+1)+".dat");
		}
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(arr1[6][i]==D[j].getDoctorId())
				{
					D16[i]=&D[j];
				}
			}
		}
		Doctor *D17[5];
		for(int i=0;i<2;i++)
		{
			arr1[7][i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient8/EHR/EHR"+to_string(i+1)+".dat");
		}
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(arr1[7][i]==D[j].getDoctorId())
				{
					D17[i]=&D[j];
				}
			}
		}
		Doctor *D18[5];
		arr1[8][0]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient9/EHR/EHR"+to_string(1)+".dat");
		for(int j=0;j<5;j++)
		{
			if(arr1[8][0]==D[j].getDoctorId())
			{
				D18[0]=&D[j];
			}
		}
		Doctor *D19[5];
		for(int i=0;i<5;i++)
		{
			arr1[9][i]=readEHR(E,"/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient10/EHR/EHR"+to_string(i+1)+".dat");
		}
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(arr1[9][i]==D[j].getDoctorId())
				{
					D19[i]=&D[j];
				}
			}
		}
		//char pass[10]="p1@123";
		cout<<"chk";
		//char plname[30]="sarfraz";
		//char occup[30]="mazdoor";
		//Patient P(1,"sad","xD",40,"pew",4);
		Patient P[10]={
		{1,"p1@123","Sarfraz Ahmed",40,"Mazdoor",4},
		{2,"p2@123","Babar Azam",40,"Chaprasi",1},
		{3,"p3@123","Shadab khan",40,"Mechanic",3},
		{4,"p4@123","Shaheen Afridi",40,"Carpenter",5},
		{5,"p5@123","Naseem Shah",40,"Mazdoor",1},
		{6,"p6@123","Iftikhar Ahmed",40,"Chaprasi",4},
		{7,"p7@123","Muhammad Rizwan",40,"Mechanic",4},
		{8,"p8@123","Fakhar Zaman",40,"Carpenter",2},
		{9,"p9@123","Imad Wasim",40,"Mazdoor",1},
		{10,"p10@123","Imam-Ul-Haq",40,"Chaprasi",5}
		};
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<P[i].getIndexdoctor();j++)
			{
				P[i].setDocIds(arr1[i][j], j);// Initialize a variable to store the user's choice to continue.	// Read in all Doctor objects.
			}
		}
	writepatient(P,10);
	
	
	
char Deg[5][255];
	char name[5][255];
			char Password[5][255];
			strcpy(Deg[0],"Doctor of Medicine (Neurology)");
			strcpy(Deg[1],"Doctor of Medicine (Nephrology)");
			strcpy(Deg[2],"Doctor of Medicine (Gynecology)");
			strcpy(Deg[3],"Doctor of Medicine (Urology)");
			strcpy(Deg[4],"Clinical psychology");
			strcpy(name[0],"Dr Shadat");
			strcpy(name[1],"Dr Ibadat");
			strcpy(name[2],"Dr Adalat");
			strcpy(name[3],"Dr Riasat");
			strcpy(name[4],"Dr Sharafat");
			strcpy(Password[0],"d1@123");
			strcpy(Password[1],"d2@123");
			strcpy(Password[2],"d3@123");
			strcpy(Password[3],"d4@123");
			strcpy(Password[4],"d5@123");


			Doctor D[5]={{1,Password[0],name[0],40,Deg[0]},{2,Password[1],name[1],50,Deg[1]},{3,Password[2],name[2],60,Deg[2]},{4,Password[3],name[3],35,Deg[3]}
			,{5,Password[4],name[4],45,Deg[4]}};
		char contin='Y';
		EHR E;
			int arr1[10][5];
			for(int i=0;i<4;i++)
			{
				arr1[0][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient1/EHR/EHR"+to_string(i+1)+".dat");
				E.storeEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient1/EHR/EHR"+to_string(i+1)+".dat", i+1);
				arr1[0][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient1/EHR/EHR"+to_string(i+1)+".dat");
				cout<<arr1[0][i]<<endl;
				E.Display();
			}
			Doctor *D1[10][5];
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(arr1[0][i]==D[j].getDoctorId())
					{
						D1[0][i]=&D[j];
					}
				}
			}
			arr1[1][0]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient2/EHR/EHR1.dat");
			E.Display();
			cout<<arr1[1][0]<<endl;
			for(int j=0;j<5;j++)
			{
				if(arr1[1][0]==D[j].getDoctorId())
				{
					D1[1][0]=&D[j];
				}
			}
			for(int i=0;i<3;i++)
			{
				arr1[2][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient3/EHR/EHR"+to_string(i+1)+".dat");
			}
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(arr1[2][i]==D[j].getDoctorId())
					{
						D1[2][i]=&D[j];
					}
				}
			}
			for(int i=0;i<5;i++)
			{
				arr1[3][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient4/EHR/EHR"+to_string(i+1)+".dat");
			}
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(arr1[3][i]==D[j].getDoctorId())
					{
						D1[3][i]=&D[j];
					}
				}
			}
			arr1[4][0]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient5/EHR/EHR"+to_string(1)+".dat");
			for(int j=0;j<5;j++)
			{
				if(arr1[4][0]==D[j].getDoctorId())
				{
					D1[4][0]=&D[j];
				}
			}
			for(int i=0;i<4;i++)
			{
				arr1[5][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient6/EHR/EHR"+to_string(i+1)+".dat");
			}
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(arr1[5][i]==D[j].getDoctorId())
					{
						D1[5][i]=&D[j];
					}
				}
			}
			for(int i=0;i<4;i++)
			{
				arr1[6][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient7/EHR/EHR"+to_string(i+1)+".dat");
				E.Display();
				cout<<arr1[6][i]<<endl;
			}
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(arr1[6][i]==D[j].getDoctorId())
					{
						D1[6][i]=&D[j];
					}
				}
			}
			for(int i=0;i<2;i++)
			{
				arr1[7][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient8/EHR/EHR"+to_string(i+1)+".dat");
			}
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(arr1[7][i]==D[j].getDoctorId())
					{
						D1[7][i]=&D[j];
					}
				}
			}
			arr1[8][0]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient9/EHR/EHR"+to_string(1)+".dat");
			for(int j=0;j<5;j++)
			{
				if(arr1[8][0]==D[j].getDoctorId())
				{
					D1[8][0]=&D[j];
				}
			}
			for(int i=0;i<5;i++)
			{
				arr1[9][i]=E.readEHR("/home/safi/Documents/Semester2/OOP/Project/Cloud/Patient10/EHR/EHR"+to_string(i+1)+".dat");
			}
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(arr1[9][i]==D[j].getDoctorId())
					{
						D1[9][i]=&D[j];
					}
				}
			}
//			char pass[10]="p1@123";
			cout<<"chk";
			Patient P[10]={
			{1,"p1@123","Sarfraz Ahmed",40,"Mazdoor",4},
			{2,"p2@123","Babar Azam",40,"Chaprasi",1},
			{3,"p3@123","Shadab khan",40,"Mechanic",3},
			{4,"p4@123","Shaheen Afridi",40,"Carpenter",5},
			{5,"p5@123","Naseem Shah",40,"Mazdoor",1},
			{6,"p6@123","Iftikhar Ahmed",40,"Chaprasi",4},
			{7,"p7@123","Muhammad Rizwan",40,"Mechanic",4},
			{8,"p8@123","Fakhar Zaman",40,"Carpenter",2},
			{9,"p9@123","Imad Wasim",40,"Mazdoor",1},
			{10,"p10@123","Imam-Ul-Haq",40,"Chaprasi",5}};
			for(int i=0;i<10;i++)
			{
				for(int j=0;j<P[i].getIndexdoctor();j++)
				{
					P[i].setDocIds(arr1[i][j], j);// Initialize a variable to store the user's choice to continue.	// Read in all Doctor objects.
				}
			}
//			for(int i=0;i<10;i++)
//			{
//
//				for(int j=0;j<P[i].getIndexdoctor();j++)
//				P[i].setDocIds(D1[i][j]->getDoctorId(), j);
//			}
		writeDoctor(D,5);// Seed the random number generator with the current time
		writepatient(P,10);*/

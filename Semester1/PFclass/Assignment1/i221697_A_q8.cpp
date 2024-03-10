/* Name :Saif ur rehman    Student ID: i221697
	Assignment#1*/
# include <iostream>

# include <iomanip>

# include <string>

using namespace std;

int main()
   {
   	const  int   CRDT_HRS = 17 ;							//Declaring constants.
   	
   	const  string  DEPARTMENT = "CYBER SECURITY" ;
   	
   	float  sgpa1 = 0 , sgpa2 = 0 , cgpa = 0 ;					//declaring variables to store calculated GPAS.
   	
     	string  name , registration_no , section ;					//declaring strings to store personal data of student.
   	
   	float  iict , pf , calculus , pakst , english , La , total ;			//declaring variables to store marks of Semester1.
   	
   	
   	
   	cout << "\nEnter your name :" ;							//Taking personal Data from user.
   	
   	cin >> name ;
   	
   	cout << "\nEnter your Registration_Number :" ;
   	
   	cin >> registration_no ;
   	
   	cout << "\nEnter your Section :" ;
   	
   	cin >> section ;
   	
   	
   	cout << "\n\nFIRST SEMESTER MARKS:" ;						//taking marks of Semester1.
   	
   	cout << "\nEnter the Grade points of IICT :" ;
   	
   	cin >> iict ;
   	
   	cout << "\nEnter the Grade points of Calculus and analytical geometry :" ;
   	
   	cin >> calculus ;
   	
   	cout << "\nEnter the Grade points of Pak studies:" ;
   	
   	cin >> pakst ;
   	
   	cout << "\nEnter the Grade points of Linear algebra :" ;
   	
   	cin >> La ;
   	
   	cout << "\nEnter the Grade points of English Grammar and Composition :" ;
   	
   	cin >> english ;
   	
   	cout << "\nEnter the Grade points of Programming Fundamentals :" ;
   	
   	cin >> pf ;
   	
   	total = iict *1+ pf*4 + calculus*3 + pakst*3 + english*3 + La*3 ;		//Calculating total of grade points according to credit hours.
   	
   	sgpa1 =  total / CRDT_HRS;					               //Calculating GPA of smester1 as per total 17 credit hours.
   	
   	
   	cout << "\n\nSECOND SEMESTER MARKS:" ;						//Taking marks of Semester2.
   	
   	float  oop , digitalLogic , diff_eq , islamiat , comm_skill ;
   	
   	cout << "\nEnter the Grade points of OOP :" ;
   	
   	cin >> oop ;
   	
   	cout << "\nEnter the Grade points of Islamic Studies :" ;
   	
   	cin >> islamiat ;
   	
   	cout << "\nEnter the Grade points of Digital logic Design :" ;
   	
   	cin >> digitalLogic ;
   	
   	cout << "\nEnter the Grade points of Differential Equations :" ;
   	
   	cin >> diff_eq ;
   	
   	cout << "\nEnter the Grade points of Communication and Presentation skills :" ;
   	
   	cin >> comm_skill;
   	
   	total = oop*4 + digitalLogic*4 + islamiat*3 + diff_eq*3 + comm_skill *3;			//Calculating total marks of Semester2.
   	
   	sgpa2 =  total / CRDT_HRS;							//Calculating GPA of Semester2.
   	
   	cgpa = ( sgpa1 + sgpa2 ) / 2 ;							//Calculating CGPA.
   	
   	
   	
   	cout << endl << setw (150) << setfill ('*') << " " << endl ;						//Displaying Personal data of student.
   	
   	cout << endl << endl << "Student Name" << setw (10) << setfill (' ') << ":" << setw (30) << name ;
   	
   	cout << endl << endl << "Registration Number" << setw (3) << ":" << setw (30) << registration_no ;
   	
   	cout << endl << endl << "Department" << setw (12) << ":" << setw (30) << DEPARTMENT ;
   	
   	cout<<endl<<endl<<"Section"<<setw(15)<<":"<<setw(30)<<section;
   	
   	
   	cout << endl << setw (100) << setfill ('*') << " " << endl ;
   	
   	cout << setw (25) << setfill (' ') << "Semester 1" << endl << endl << endl ;			//Displaying Semester1 Marks.
   	
   	cout << "Subject" << setw (20) << setfill (' ') << right << "Obtained Marks" << endl ;
   	
   	cout << "IICT" << setw (23) << right << iict << endl << endl ;
   	
   	cout << "Calculus" << setw (19) << right << calculus << endl << endl ;
   	
   	cout << "PF" << setw (25) << right << pf << endl << endl ;
   	
   	cout << "Linear Algebra" << setw (13) << right << La << endl << endl ;
   	
   	cout << "English" << setw (20) << right << english << endl << endl ;
   	
   	cout << "Pak Studies" << setw (16) << right << pakst << endl << endl ;
   	
   	cout << endl << "Sgpa=" << sgpa1 << endl ;							//Displaying GPA of Semester1.
   	
   	
  	cout << endl << setw (100) << setfill ('*') << " " << endl ;
  	
   	cout << setw (25) << setfill (' ') << "Semester 2" << endl << endl << endl ;			//Displaying Semester2 Marks. 
   	
   	cout << "Subject" << setw (20) << setfill (' ') << right << "Obtained Marks" << endl ;
   	
   	cout << "OOP" << setw (23) << right << oop << endl << endl ;
   	
   	cout << "Digital Logics" << setw (12) << right << calculus << endl << endl ;
   	
   	cout << "DIfferentials" << setw (13) << right << pf << endl << endl ;
   	
   	cout << "Islamiat" << setw (18) << right << La << endl << endl ;
   	
   	cout << "Comm skill" << setw (16) << right << english << endl << endl ;
   	
   	cout << endl << "Sgpa=" << sgpa2 << endl ;							//Displaying GPA of Semester2.
   	
   	cout << endl << "cgpa=" << cgpa << endl ;							//Displaying CGPA.
   	
   	
   	
   }
   	
   	
   	

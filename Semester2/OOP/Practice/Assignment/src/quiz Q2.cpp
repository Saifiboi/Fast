//#include <iostream>
//#include<string>
//using namespace std;
//int CountThree(char *ptr)
//{
//	int i=0;
//	int counter=0;
//	int sum=0;
//	while(ptr[i]!='\0' && i<255)
//	{
//		counter=0;
//		while(ptr[i]!=' '&& ptr[i]!='\n')
//		{
//			counter++;
//			i++;
//		}
//		if(counter==3)
//		{
//			sum++;
//		}
//		i++;
//	}
//	return sum;
//}
//int main()
//{
//	char *ptr;
//	ptr=new char[255];
//	cout<<"Enter Your Text maximum 255 characters:";
//	cin.getline(&ptr[0], 255, '\n');
//	cout<<"Number required :"<<CountThree(ptr);
//	delete[] ptr;
//	ptr=0;
//}

//////============================================================================
////// Name        : Assignment.cpp
////// Author      : Saif Ur rehman
////// Version     :
////// Copyright   : Your copyright notice
////// Description : Hello World in C++, Ansi-style
//////============================================================================
////
//#include <iostream>
//#include <fstream>
//using namespace std;
////
////int arrc=0;
////
////bool check_prime(int n) {
////  bool is_prime = true;
////
////  // 0 and 1 are not prime numbers
////  if (n == 0 || n == 1) {
////    is_prime = false;
////  }
////
////  for (int i = 2; i <= n / 2; ++i) {
////    if (n % i == 0) {
////      is_prime = false;
////      break;
////    }
////  }
////
////  return is_prime;
////}
////
////void arrchangehorz(int arr[][7] , int pew[],int &sum,int vals[][7],int &max){
////	bool is=false;
////	int p;
////	bool chk2 = false;
////	for(int i=0;i<7;i++){
////		for(int j=0;j<7;j++){
////			chk2 = false;
////			if(check_prime(arr[i][j]) == 1){
////				is = true;
////			}else{
////				is=false;
////				chk2 = false;
////				continue;
////			}
////			if(is==1){
////				if(j+2 < 7){
////					if(check_prime(arr[i][j+1]) && check_prime(arr[i][j+2]) == 1){
////						chk2 = true;
////						p = j;
////					}
////				}
////			}
////			if(chk2==1){
////			while(p<7){
////				if(check_prime(arr[i][p])==1){
////					pew[arrc] = arr[i][p];
////					vals[i][p]+=1;
////					arrc++;
////				}else{
////					break;
////				}
////				p++;
////			}
////			pew[arrc] = 0;
////			arrc++;
////			if(max<(p-j))
////			{
////				max=(p-j);
////			}
////		}
////		}
////	}
////}
////void arrchangevert(int arr[][7] , int pew[],int &sum,int  vals[][7],int &max){
////	bool is=false;
////	int p;
////	bool chk2 = false;
////	for(int j=0;j<7;j++){
////		for(int i=0;i<7;i++){
////			chk2 = 0;
////			if(check_prime(arr[i][j]) == 1){
////				is = true;
////			}else{
////				is=false;
////				chk2 = false;
////				continue;
////			}
////			if(is==1){
////				if(j+2 < 7){
////					if(check_prime(arr[i+1][j]) && check_prime(arr[i+2][j]) == 1){
////						chk2 = true;
////						p = i;
////					}
////				}
////			}
////			if(chk2==1){
////			while(p<7){
////				if(check_prime(arr[p][j])==1){
////					pew[arrc] = arr[p][j];
////					vals[p][j]+=1;
////					arrc++;
////				}else{
////					break;
////				}
////				p++;
////			}
////			pew[arrc++] = 0;
////			if(max<(p-i))
////			{
////				max=(p-i);
////			}
////		}
////		}
////	}
////}
////void diagright(int arr[][7] , int pew[],int i,int j,int vals[][7],int &max){
////	bool chi = false;
////	int p;
////	int q;
////	if(i+2 <7 && j+2 < 7){
////		if(check_prime(arr[i+1][j+1]) && check_prime(arr[i+2][j+2]) == 1){
////			chi = true;
////			p = i;
////			q = j;
////		}
////
////		if(chi == 1){
////			while(p < 7 && q < 7){
////				if(check_prime(arr[p][q])==1){
////					pew[arrc] = arr[p][q];
////					vals[p][q]+=1;
////					arrc++;
////				}else{
////					break;
////				}
////				p++;
////				q++;
////			}
////			pew[arrc] = 0;
////			if(max<(p-i))
////			{
////				max=(p-i);
////			}
////			arrc++;
////		}
////	}
////}
////void diagleft(int arr[][7] , int pew[],int i,int j,int vals[][7],int &max){
////	bool chi = false;
////	int p;
////	int q;
////	if(i+2 <7 && j-2 >= 0){
////		if(check_prime(arr[i+1][j-1]) && check_prime(arr[i+2][j-2]) == 1){
////			chi = true;
////			p = i;
////			q = j;
////		}
////
////		if(chi == 1){
////			while(p < 7 && q >= 0){
////				if(check_prime(arr[p][q])==1){
////					pew[arrc] = arr[p][q];
////					vals[p][q]+=1;
////					arrc++;
////				}else{
////					break;
////				}
////				p++;
////				q--;
////			}
////			if(max<(p-i))
////			{
////				max=(p-i);
////			}
////			pew[arrc] = 0;
////			arrc++;
////		}
////	}
////}
////int sum_ret(int grid[][7],int val_in[][7])
////{
////	int sum=0;
////	for(int i=0;i<7;i++)
////	{
////		for(int j=0;j<7;j++)
////		{
////			if(val_in[i][j]==0)
////			{
////				sum+=grid[i][j];
////				cout<<grid[i][j]<<"+";
////			}
////		}
////	}
////	return sum;
////}
////int max_col(int vals[][7])
////{
////	int sum=0;
////	int max=0;
////	int col=0;
////	for(int j=0;j<7;j++)
////	{
////		sum=0;
////		for(int i=0;i<7;i++)
////		{
////			sum+=vals[i][j];
////		}
////		if(sum>max)
////		{
////			max=sum;
////			cout<<max<<endl;
////			col=j;
////		}
////	}
////	return col;
////}
////int max_row(int vals[][7])
////{
////	int sum=0;
////	int max=0;
////	int row=0;
////	for(int i=0;i<7;i++)
////	{
////		sum=0;
////		for(int j=0;j<7;j++)
////		{
////			sum+=vals[i][j];
////		}
////		if(sum>max)
////		{
////			max=sum;
////			cout<<max<<endl;
////			row=i;
////		}
////	}
////	return row;
////}
////void diaga(int arr[][7] , int pew[],int &sum,int vals[][7],int &max){
////	bool is = false;
////	for(int i = 0;i<7;i++){
////		for(int j=0;j<7;j++){
////			if(check_prime(arr[i][j]) == 1){
////				is = true;
////				diagright(arr,pew,i,j,vals,max);
////				diagleft(arr,pew,i,j,vals,max);
////			}else{
////				is = false;
////				continue;
////			}
////		}
////	}
////}
////
////
////int main() {
////	srand(time(0));
////	const int SIZE=7;
////	int vals[7][7]={0};
////	ifstream fin;
////	int pew[1000];
////	fin.open("/home/safi/Desktop/nums.txt");
////	int arr[SIZE][SIZE];
////	for(int i=0;i<7;i++)
////	{
////		for(int j=0;j<7;j++){
////			fin>>arr[i][j];
////		}
////	}
////
//////	for(int i=0;i<7;i++)
//////		{
//////			for(int j=0;j<7;j++){
//////				cout<<arr[i][j]<<" ";
//////			}
//////			cout<<endl;
//////		}
////	int sum=0;
////	int max=0;
////	arrchangehorz(arr,pew,sum,vals,max);
////	arrchangevert(arr,pew,sum,vals,max);
////	diaga(arr,pew,sum,vals,max);
//////	cout<<max<<endl;
////	for(int i=0;i<7;i++)
////	{
////		for(int j=0;j<7;j++)
////		{
////			cout<<vals[i][j]<<" ";
////		}
////		cout<<endl;
////	}
////	cout<<max_row(vals)<<endl;
////	cout<<max_col(vals)<<endl;
////	return 0;
////}
//#include <iostream>
//using namespace std;
//
//void fundisplay(int **arr, int size) {
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int det2(int **p) {
//    return (p[0][0] * p[1][1]) - (p[0][1] * p[1][0]);
//}
//
//int det3(int **p) {
//    int sum = 0;
//    int mul = 1;
//    int **temp;
//    for (int i = 0; i < 3; i++) {
//        temp = new int *[2];
//        for (int k = 0; k < 2; k++) {
//            temp[k] = new int[2];
//        }
//        for (int j = 0, m = 0; j < 3; j++) {
//            if (j == i) {
//                continue;
//            }
//            for (int l = 0, n = 0; l < 3; l++) {
//                if (l == 2) {
//                    continue;
//                }
//                temp[m][n] = p[j][l];
//                n++;
//                if (n == 2) {
//                    n = 0;
//                    m++;
//                }
//            }
//        }
//        sum += mul * p[i][2] * det2(temp);
//        for (int z = 0; z < 2; z++) {
//            delete[] temp[z];
//        }
//        delete[] temp;
//        mul *= -1;
//    }
//    return sum;
//}
//int det4(int **p)
//{
//	 int sum = 0;
//	    int mul = -1;
//	    int **temp;
//	    for (int i = 0; i < 4; i++) {
//	        temp = new int *[3];
//	        for (int k = 0; k < 3; k++) {
//	            temp[k] = new int[3];
//	        }
//	        for (int j = 0, m = 0; j < 4; j++) {
//	            if (j == i) {
//	                continue;
//	            }
//	            for (int l = 0, n = 0; l < 4; l++) {
//	                if (l == 3) {
//	                    continue;
//	                }
//	                temp[m][n] = p[j][l];
//	                n++;
//	                if (n == 3) {
//	                    n = 0;
//	                    m++;
//	                }
//	            }
//	        }
//	        sum += mul * p[i][3] * det3(temp);
//	        for (int z = 0; z < 3; z++) {
//	            delete[] temp[z];
//	        }
//	        delete[] temp;
//	        mul *= -1;
//	    }
//	    return sum;
//}
//int det5(int **p)
//{
//	 int sum = 0;
//	    int mul = 1;
//	    int **temp;
//	    for (int i = 0; i < 5; i++) {
//	        temp = new int *[4];
//	        for (int k = 0; k < 4; k++) {
//	            temp[k] = new int[4];
//	        }
//	        for(int j = 0, m = 0; j < 5 ;j++){
//	            if (j == i) {
//	                continue;
//	            }
//	            for (int l = 0, n = 0; l < 5; l++) {
//	                if (l == 4) {
//	                    continue;
//	                }
//	                temp[m][n] = p[j][l];
//	                n++;
//	                if (n == 4) {
//	                    n = 0;
//	                    m++;
//	                }
//	            }
//	        }
//	        sum += mul * p[i][4] * det4(temp);
//	        for (int z = 0; z < 4; z++) {
//	            delete[] temp[z];
//	        }
//	        delete[] temp;
//	        mul *= -1;
//	    }
//	    return sum;
//}
//int main() {
//    int **p;
//    p = new int *[5];
//    for (int i = 0; i < 5; i++) {
//        p[i] = new int[5];
//    }
//    cout << "input:";
//    /*
//    for(int i=0; i<3; i++) {
//        for(int j=0; j<3; j++) {
//            cin >> p[i][j];
//        }
//    }
//    */
//    p[0][0] = 12;
//    p[0][1] = 22;
//    p[0][2] = 32;
//    p[0][3] = 42;
//    p[0][4] = 52;
//    p[1][0] = 56;
//    p[1][1] = 85;
//    p[1][2] = 94;
//    p[1][3] = 99;
//    p[1][4] = 98;
//    p[2][0] = 37;
//    p[2][1] = 41;
//    p[2][2] = 5;
//    p[2][3] = 62;
//    p[2][4] = 63;
//    p[3][0] = 15;
//    p[3][1] = 14;
//    p[3][2] = 44;
//    p[3][3] = 27;
//    p[3][4] = 28;
//    p[4][0] = 29;
//    p[4][1] = 30;
//    p[4][2] = 31;
//    p[4][3] = 32;
//    p[4][4] = 33;
//    cout << "Det: " << det5(p) << endl;
//
//    for (int i = 0; i < 5; i++) {
//        delete[] p[i];
//    }
//    delete[] p;
//
//    return 0;
//}
//
////void convert(int &num,char * ptr,int size)
////{
////	if(size==0)
////	{
////		return;
////	}
////	ptr[size-1]=num%2+'0';
////	num/=2;
////	convert(num,ptr,size-1);
////}
////void call_drop(char * ptr,int size)
////{
////	if(size==0)
////	{
////		return;
////	}
////	call_drop(ptr,size-1);
////	ptr[size-1]=ptr[size];
////	ptr[size]='\0';
////}
////void call_rev(char * ptr,int size)
////{
////	if(size==0 ){
////		return;
////	}
////	if(ptr[size-1]=='0')
////	{
////		ptr[size-1]='1';
////	}
////	else if(ptr[size-1]=='1')
////	{
////		ptr[size-1]='0';
////	}
////	call_rev(ptr,size-1);
////}
////void print(char * ptr,int size)
////{
////	if(size==0)
////	{
////		return;
////	}
////	cout<<ptr<<endl;
////	call_drop(ptr,size);
////	call_rev(ptr,size);
////	print(ptr,size-1);
////
////}
////int main()
////{
////	srand(time(0));
////	int num=415;
////	int copy=num;
////	char *ptr;
////	ptr=new char [16];
////	convert(copy,ptr,16);
////	print(ptr,16);
////}
//

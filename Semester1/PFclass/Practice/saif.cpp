#include <iostream>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	int **ptr= new int*[3];
	for(int i=0; i<3;i++){
		*(ptr+i) = new int[3];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ptr[i][j] = 5;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<< ptr[i][j]<<" ";
		}
	}
	for(int i=0;i<3;i++){
		delete[] ptr[i];
	}
	delete[] ptr;



return 0;
}

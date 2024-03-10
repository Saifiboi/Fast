#include <iostream>
using namespace std;

void My_Func ( int *q, int row, int col )
{
int i, j ;
for ( i = 0 ; i < row ; i++ )
{
for ( j = 0 ; j < i ; j++ )

* ( q + i * col + j ) = * ( q + i * col + j ) *3.2 ;
}
}
int main()
{
int a[5][5] = { 1, 2, 3, 4, 5, 6,7,8,9, 0,1, 6,3,3,4,1,9,8,6,1};
My_Func ( &a[0][0], 5, 5 );
}

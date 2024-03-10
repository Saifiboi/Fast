/*#include "lab 03.cpp"
#include <gtest/gtest.h>
using namespace std;*/
/*TEST(CalculateSum, T1){
  int **ptr1=new int*[4];
  for (int i=0;i<4;i++){

  ptr1[i]=new int [4];

  }
  for (int i=0;i<4;i++){

    for(int j=0;j<4;j++){

        ptr1[i][j]=2;
        cout<<ptr1[i][j]<<" ";

    }
  }
    int arr[]={8,8,8,8};
    int* res=CalculateSum(ptr1,4,4);
   for (size_t i = 0; i < 4; i++)
   {
       EXPECT_EQ(arr[i],res[i]);

   }
}*/

/*TEST(Diagonal, T1){
    int **matrix=new int*[3];
    for (int i=0;i<4;i++){

      matrix[i]=new int[3];
    }
    matrix[0][0]=1;
    matrix[0][1]=2;
    matrix[0][2]=3;
    matrix[1][0]=0;
    matrix[1][1]=3;
    matrix[1][2]=4;
    matrix[2][0]=0;
    matrix[2][1]=0;
    matrix[2][2]=10;

    //,{0,3,4},{0,0,10}};
   EXPECT_EQ("upper",Diagonal(matrix,3,3));
}

TEST(Diagonal, T2){
  int **matrix=new int*[3];
  for (int i=0;i<4;i++){

    matrix[i]=new int[3];
  }
  matrix[0][0]=1;
  matrix[0][1]=0;
  matrix[0][2]=0;
  matrix[1][0]=1;
  matrix[1][1]=2;
  matrix[1][2]=0;
  matrix[2][0]=10;
  matrix[2][1]=4;
  matrix[2][2]=10;
   EXPECT_EQ("notupper",Diagonal(matrix,3,3));
}
*/

/*TEST(MatrixSum, T1){
  int **matrix1=new int*[3];
  for (int i=0;i<3;i++){

    matrix1[i]=new int[3];
  }
  matrix1[0][0]=1;
  matrix1[0][1]=2;
  matrix1[0][2]=3;
  matrix1[1][0]=0;
  matrix1[1][1]=3;
  matrix1[1][2]=4;
  matrix1[2][0]=0;
  matrix1[2][1]=0;
  matrix1[2][2]=10;
  int **matrix2=new int*[3];
  for (int i=0;i<3;i++){

    matrix2[i]=new int[3];
  }
  matrix2[0][0]=1;
  matrix2[0][1]=0;
  matrix2[0][2]=0;
  matrix2[1][0]=1;
  matrix2[1][1]=2;
  matrix2[1][2]=0;
  matrix2[2][0]=10;
  matrix2[2][1]=4;
  matrix2[2][2]=10;

  int **sum=new int*[3];
  for (int i=0;i<3;i++){

    sum[i]=new int[3];
  }
  sum[0][0]=2;
  sum[0][1]=2;
  sum[0][2]=3;
  sum[1][0]=1;
  sum[1][1]=5;
  sum[1][2]=4;
  sum[2][0]=10;
  sum[2][1]=4;
  sum[2][2]=20;
  int**res= MatrixSum(matrix1,matrix2,3,3);
   for (size_t i = 0; i < 3; i++)
   {
       for (size_t j = 0; i < 3; i++)
       {
        EXPECT_EQ(sum[i][j],res[i][j]);
       }

   }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/

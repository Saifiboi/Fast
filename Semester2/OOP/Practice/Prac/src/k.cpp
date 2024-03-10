//#include<iostream>
//using namespace std;
//int main()
//{
//  int reqsum;
//  bool check=0;
//  int summation;
//  int counter[5]={0,0,0,0,0};
//  int indexarr[5][10];
//  int arr[12]={7, 3, 5, 12, 2, 1, 5, 3, 8, 4, 6, 4};
//  int sum=0;
//  int index=0;
//  for(int i=0;i<12;i++)
//  {
//    sum+=arr[i];
//  }
//  if(sum%5!=0)
//  {
//    cout<<"\nSubset Doesnot exist!";
//  }
//  else
//  {
//    reqsum=sum/5;
//    for(int i=0;i<12;i++)
//    {
//      summation=arr[i];
//      counter[index]=1;
//      for(int k=i+1;(i+k<12);k++)
//      { summation=arr[i];
//        counter[index]=1;
//        for(int j=k;j<12;j++)
//        {
//          summation+=arr[j];
//          counter[index]+=1;
//          if(summation==reqsum)
//          {
//            indexarr[index][0]=i;
//            for(int l=1;l<counter[index];l++)
//            {
//              indexarr[index][l]=k+(l-1);
//            }
//            for(int m=0;m<index;m++)
//            {
//              if(counter[index]==counter[m])
//              {
//                for(int n=0;n<counter[index];n++)
//                {
//                  check=0;
//                  for(int o=0;0<counter[index];o++)
//                  {
//                    if(arr[indexarr[index][n]]==arr[indexarr[m][o]])
//                    {
//                      check=1;
//                      break;
//                    }
//                  }if(check==0)
//                  {
//                    break;
//                  }
//                }
//              }
//            }
//            if(check==0)
//            {
//              index+=1;
//            }
//            break;
//          }
//          else if(summation>reqsum)
//          {
//            break;
//          }
//        }
//      }
//    }
//    for(int i=0;i<5;i++)
//    {
//      for(int j=0;j<counter[i];j++)
//      {
//       cout<<arr[indexarr[i][j]]<<"\t";
//      }
//      cout<<endl;
//    }
//  }
//
//}

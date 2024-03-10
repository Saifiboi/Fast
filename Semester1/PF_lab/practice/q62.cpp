#include<iostream>
using namespace std;
int main()
{
    int **ptr=new int *[3];
    for(int i=0;i<3;i++)
    {
        *(ptr+i)=new int [3];
    }
    cout<<"\nEnter 9 elements of array[3][3]:";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>*(*(ptr+i)+j);
    }
    int large;
    for(int k=1;k<=3*3;k++)
    {
	    for(int i=0;i<3;i++)
	    {
		for(int j=0;j<3;j++)
		{
			if(j==2 && i!=2)
			{
				if(ptr[i][2]>ptr[i+1][0])
				{
				     large=*(*(ptr+i)+2);
				     *(*(ptr+i)+j)=*(*(ptr+(i+1))+(0));
				     *(*(ptr+(i+1))+(0))=large;
		     	}
			}
			else if (i==2 && j==2)
				continue;
		    else if(ptr[i][j]>ptr[i][j+1])
		     {
		         large=*(*(ptr+i)+j);
		         *(*(ptr+i)+j)=*(*(ptr+i)+(j+1));
		         *(*(ptr+i)+(j+1))=large;
		     }
		 }
	    }
	}
	cout<<"\nArray After sort:\n";
	for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<*(*(ptr+i)+j)<<"\t";
        cout<<endl;
    }

    for(int i=0;i<3;i++)
    {
        delete[] *(ptr+i);
        ptr[i]=0;
    }
    delete[] ptr;
    ptr=0;
    
}

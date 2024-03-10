#include<iostream>
using namespace std;
void insert(int *arr, int data, int &end)
{
    if (end != 30 - 1)
    {
        arr[++end] = data;
        for (int i = end; i >= 1; i /= 2)
        {
            if (arr[i] < arr[i / 2])
            {
                int temp = arr[i];
                arr[i] = arr[i / 2];
                arr[i / 2] = temp;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        cout << "\nTree array is Full!\n";
    }
}
void delete_min(int *arr, int &end)
{
    arr[1] = arr[end--];
    for (int i = 1; i < end;)
    {
        if (i * 2 < end && i * 2 + 1 <= end)
        {
            if (arr[i * 2] < arr[i * 2 + 1])
            {
                if (arr[i * 2] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[2 * i];
                    arr[2 * i] = temp;
                    i = 2 * i;
                }
                else{
                    break;
                }
            }
            else
            {
                if (arr[i * 2 + 1] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[2 * i + 1];
                    arr[2 * i + 1] = temp;
                    i = 2 * i + 1;
                }
                else{
                    break;
                }
            }
        }
        else
        {
            if (arr[i * 2] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[2 * i];
                arr[2 * i] = temp;
                i = 2 * i;
            }
            else{
                    break;
                }
        }
    }
}
int main()
{
    int arr[30]={0,4,5, 7, 11, 10};
    int current;
    int end = 4;
    // cout<<"Heap before inserting!\n";
    // for (int i = 1; i <= end; i++)
    // {
    //     cout << arr[i] << "\t";
    // }
    // cout<<endl;
    // insert(arr, 4, end);
    // cout<<"Heap After inserting "<<4<<" is:\n";
    // for (int i = 1; i <= end; i++)
    // {
    //     cout << arr[i] << "\t";
    // }
    // cout<<endl;
    cout<<"Heap before Deleting!\n";
    for (int i = 1; i <= end; i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<endl;
    delete_min(arr,end);
    cout<<"Heap After Deleting root is:\n";
    for (int i = 1; i <= end; i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<endl;
}
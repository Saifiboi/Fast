#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool is_heap(int *arr, int current, int end)
{
    if (current == end || end == 0)
    {
        return true;
    }
    if (2 * current > end)
    {
        return is_heap(arr, current + 1, end);
    }
    if (2 * current <= end)
    {
        if (2 * current + 1 <= end)
        {
            return (arr[current] <= arr[2 * current] && arr[current] <= arr[2 * current + 1]) && is_heap(arr, current + 1, end);
        }
        else
        {
            return (arr[current] <= arr[2 * current]) && is_heap(arr, current + 1, end);
        }
    }
    return false;
}
int main()
{
    int arr[30]={0,5, 7, 11, 10};
    int current;
    int end = 4;
    ifstream fin;
    string file_name="invalid.txt";
    fin.open(file_name);
    fin >> current;
    fin >> end;
    for (int i = 0; !fin.eof(); i++)
    {
        fin >> arr[i];
    }
    cout << "File name :"<<file_name<<"\nIs it heap?  " << is_heap(arr, current, end)<<endl;
}

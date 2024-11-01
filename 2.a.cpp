#include <iostream>
using namespace std;

void reverse(int arr[], int n, int i)
{
    int temp[n]{};
    temp[n - i - 1] = arr[i];
}
int main()
{
    int arr[] = {1, 23, 55, 4, 5, 6, 8, 78, 4, 5, 55};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {

        reverse(arr,n,i);
    }
    for (int i = 0; i < n; i++)
    {

    cout<<temp[i];
    }

    return 0;
}



//temp is not printing out of the reversse function
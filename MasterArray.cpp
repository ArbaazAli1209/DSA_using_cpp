#include <iostream>
using namespace std;

void fun(int a[], int n)
{
    cout << sizeof(a) << endl;  // This gives address of pointer 'a'.
    for (int i=0; i<n; i++)
    cout << a[i] << " ";
}

int main()
{
    // int start = 0, end = 5;
    // int arr[6] = {1,2,3,4,5,6};
    // while (start < end)
    // {
    //     swap (arr[start], arr[end]);
    //     start++;
    //     end--;
    // };
    // for (int i = 0; i < 6; i++)
    // cout << arr[i] << " ";

    // Fibonacci Series.
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int arr[1000];
    // arr[0] = 0;
    // arr[1] = 1;
    // for (int i=2; i<n; i++)
    // {
    //     arr[i] = arr[i-1] + arr[i-2];
    // }
    // cout << arr[n-1];

    // Passing Array to Function.
    int arr[5] = {1,2,4,5,6};
    cout << sizeof(arr) << endl;
    fun (arr, 5);
}
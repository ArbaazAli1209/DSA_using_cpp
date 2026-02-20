#include <iostream>
using namespace std;

int main()
{
    // int arr[1000];
    // int n;
    // cout << "Enter the size of Array: ";
    // cin >> n;   // Size of Array
    // cout << "Enter the Elements in Array: ";
    // for (int i=0; i<n; i++)
    // cin >> arr[i];

    // for (int i=0; i<n-1; i++)
    // {
    //     int index = i;
    //     for (int j=i+1; j<n; j++)
    //     {
    //         if (arr[j] < arr[index])
    //         index = j;
    //     }
    //     swap (arr[i], arr[index]);
    // }
    // for (int i=0; i<n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int arr[1000];
    int n;
    cout<<"Enter the size of element: ";
    cin>>n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    cin>>arr[i];
    for(int i = n-1; i >= 1; i--)
    {
        int index = i;
        for (int j = i-1; j>=0; j--)
        {
            if(arr[index] < arr[j])
            {
                index = j;
            }

        }
        swap (arr[index], arr[i]);
    }
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
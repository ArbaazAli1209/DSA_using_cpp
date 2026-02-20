#include <iostream>
using namespace std;

int main()
{
    // Print Array.
    // int arr[6] = {12,17,9,45,13,6};
    // for (int i = 0; i < 6; i++)
    // cout << arr[i] << " ";
    // return 0;
    
    // Taking user input.
    // int arr[6];
    // for (int i=0; i<6; i++)
    // cin >> arr[i];
    // for (int i = 0; i < 6; i++)
    // cout << arr[i] << " ";
    // return 0;

    // Taking Size and input from user.
    // cout << "Enter the Array size: ";
    // int size;
    // cin >> size;
    // int arr[100];
    // for (int i = 0; i < size; i++)
    // cin >> arr[i];
    // for (int i = 0; i < size; i++)
    // cout << arr[i] << " ";
    // return 0;

    // Print element from an array.
    // int arr[5] = {32,5,34,6,29};
    // cout << arr[0];
    
    // Size of data types.
    // int a;
    // int arr[5] = {23,34,45,56,19};
    // cout << "Size of data type: "<< sizeof(a) << endl;
    // cout << "Size of Array: " << sizeof(arr) << endl;
    // cout << "No. of elements in Array: " << sizeof(arr)/sizeof(arr[0]);

    // Find Min. value.
    int arr[5] = {23,3,4,7,8};
    int ans = INT32_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]<ans)
        ans = arr[i];
    }
    cout << ans << endl;
    // Find Max. value.
    ans = INT32_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>ans)
        ans = arr[i];
    }
    cout << ans << endl;
    return 0;
}
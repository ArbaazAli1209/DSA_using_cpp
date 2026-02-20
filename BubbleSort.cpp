#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    // Bubble Sort: Inreasing order.
    // for (int i=n-2; i>=0; i--)
    // {
    //     bool swapped = false;
    //     for (int j=0; j<=i; j++)
    //     {
    //         if (arr[j]>arr[j+1])
    //         {
    //             swap (arr[j], arr[j+1]);
    //             swapped = true;
    //         }
    //     }
    //     if (swapped==0)
    //     break;
    // }
    // for (int i=0; i<n; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    // Decreasing Order.
    for (int i=n-2; i>=0; i--)
    {
        bool swapped = false;
        for (int j=0; j<=i; j++)
        {
            if (arr[j]<arr[j+1])
            {
                swap (arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped==0)
        break;
    }
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
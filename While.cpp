#include <iostream>
using namespace std;

int main()
{
    // Print number 1 to 10
    // int i = 1;
    // while (i<=10)
    // {
    //     cout << i << " ";
    //     i = i+1;  // Update Condition
    // }
    
    // Print Table
    // int n, i = 1;
    // cout << "Enter the table number: ";
    // cin >> n;

    // while (i<=10)
    // {
    //     cout << n << " X " << i << " = " << n*i << endl;
    //     i++;
    // }


    // Print factors of a number
    // int n, i = 1;
    // cout << "Enter the number: ";
    // cin >> n;
    // while (i<=n)
    // {
    //     if (n%i==0)
    //     {
    //         cout << i << " ";
    //     }
    //     i++;
    // }
    

    // Do While loop
    // int i=1;            // Initialize
    // do
    // {
    //     cout << i << " ";
    //     i++;                // Update
    // } while (i<=10);            // Break Condition
    

    // Sum of numbers using do while
    // int sum = 0, i = 1, n;
    // cout << "Enter the number: ";
    // cin >> n;
    // do
    // {
    //     sum = sum + i;
    //     i++;
    // } while (i<=n);
    // cout << "The sum is: " << sum;
    

    // Break
    // int i = 1;
    // while (i<=10)
    // {
    //     if (i==5)
    //     {
    //         break;
    //     }
    //     cout << i << " ";
    //     i++;
    // }
    

    // Continue
    // for (int i = 0; i <= 100; i++)
    // {
    //     if (i%4==0)
    //     continue;
    //     cout << i << " ";
    // }
    

    // Switch
    int i;
    cout << "Enter the number: ";
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "Mohit";
        break;
    
    case 2:
        cout << "Rohit";
        break;
    
    default:
        cout << "Sohit";
        break;
    }
}
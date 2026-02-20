#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i <= 100; i++)
    // {
    //     cout << i << endl;
    // }
    
    // char name;
    // for (name = 'a'; name <= 'z'; name=name+1)
    // {
    //     cout << name << endl;
    // }
    
    // int n, i;
    // cout << "Enter the number: ";
    // cin >> n;
    // for (i = n; i >= 1; i--)
    // {
    //     cout << i <<" ";
    // }
    
    // int i;
    // for (i = 1; i < 100; i = i+3)
    // {
    //     cout << i << " ";
    // }
    
    // Table:
    // int n;
    // cout << "Enter the table number: ";
    // cin >> n;
    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << n << " X " << i << " = " << n*i << endl;
    // }
    
    // Claculate the power of a number.
    // int n, pow, num;
    // cout << "Enter the number: ";
    // cin >> n;
    // cout << "Enter the power: ";
    // cin >> pow;

    // num = n;
    // for (int i = 0; i < pow; i++)
    // {
    //     num = num * n;
    // }

    // cout << num;
    
    // Sum of n Natural numbers.
    // int n, i, sum = 0;
    // cout << "Enter the number: ";
    // cin >> n;

    // cout << (n*(n+1)/2)

    // for (i = 0; i <= n; i=i+1)
    // {
    //     sum = sum + i;
    // }
    // cout << sum;
    
    // Sum of square of n natural numbers.
    // int n, sum = 0, i;
    // cout << "Enter the number: ";
    // cin >> n;
    
    // for (i = 1; i <= n; i++)
    // {
    //     sum = sum + i*i;
    // }
    // cout << sum;

    // Factorial.
    // int n, fact = 1, i;
    // cout << "Enter the number: ";
    // cin >> n;

    // for ( i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // cout << "Factorial of the number is: " << fact;

    // Prime Numbers.
    // int n, i;
    // cout << "Enter the number: ";
    // cin >> n;

    // if (n < 2)
    // {
    //     cout << "Not a Prime Number.";
    //     return 0;
    // }
    // else
    // {
    //     for(i = 2; i < n; i = i+1)
    //     {
    //         if (n%i == 0)
    //         {
    //             cout << "Not a Prime Number.";
    //             return 0;
    //         }
            
    //     }

    //     cout << "Prime Number.";
    //     return 0;
    // }
    

    // Fibonacci Series (H.W.)
    int n, i, curr, prev, last;
    cout << "Enter the series number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Enter valid number";
        return 0;
    }
    else
    {
        last = 0;
        prev = 1;
        curr = 1;
    }
    for ( i = 0; i < n; i = i + 1)
    {
        curr = last + prev;
        last = prev;
        prev = curr;
        cout << curr << " ";
    }
    
}
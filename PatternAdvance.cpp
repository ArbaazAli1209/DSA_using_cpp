#include <iostream>
using namespace std;

int main()
{
    // int row, col, n;
    // cout << "Enter the input: ";
    // cin >> n;
    // for (row=1; row<=n; row=row+1)
    // {
    //     for (col=1; col<=n-row; col=col+1)
    //     cout << "  ";

    //     for (col=1; col<=2*row-1; col=col+1)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }


    // int row, col, n;
    // cout << "Enter the input: ";
    // cin >> n;
    // for (row=1; row<=n; row=row+1)
    // {
    //     for (col=1; col<=n-row; col=col+1)
    //     cout << "  ";

    //     for (col=1; col<=row; col=col+1)
    //     {
    //         cout << col << " ";
    //     }
    //     for (col=row-1; col>=1; col=col-1)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }


    // int row, col, n;
    // cout << "Enter the input: ";
    // cin >> n;

    // for (row=n; row>=1; row=row-1)
    // {
    //     // Print Space
    //     for (col=1; col<=n-row; col=col+1)
    //     cout << "  ";
    //     // Print Star
    //     for (col=1; col<=2*row-1; col=col+1)
    //     cout << "* ";
        
    //     cout << endl;
    // }


    // int row, col, n;
    // cout << "Enter the input: ";
    // cin >> n;

    // for (row=n; row>=1; row=row-1)
    // {
    //     // Print *
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";
    //     // Print Space
    //     for (col=1; col<=2*n-2*row; col=col+1)
    //     cout << "  ";
    //     // Print *
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";

    //     cout << endl;
    // }
    // for (row=1; row<=n; row=row+1)
    // {
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";
    //     for (col=1; col<=2*n-2*row; col=col+1)
    //     cout << "  ";
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";

    //     cout << endl;
    // }


    // int row, col, n;
    // cout << "Enter the input: ";
    // cin >> n;

    // for (row=1; row<=n; row=row+1)
    // {
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";
    //     for (col=1; col<=2*n-2*row; col=col+1)
    //     cout << "  ";
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";

    //     cout << endl;
    // }
    // for (row=n-1; row>=1; row=row-1)
    // {
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";
    //     for (col=1; col<=2*n-2*row; col=col+1)
    //     cout << "  ";
    //     for (col=1; col<=row; col=col+1)
    //     cout << "* ";

    //     cout << endl;
    // }


    int row, col, n;
    cout << "Enter the input: ";
    cin >> n;

    for (row=1; row<=n; row=row+1)
    {
        for (col=1; col<=n-row; col=col+1)
        cout << " ";
        for (col=1; col<=row; col=col+1)
        {
        cout << "* ";
        }
        cout << endl;
    }
    for (row=n; row>=1; row=row-1)
    {
        for (col=1; col<=n-row; col=col+1)
        cout << " ";
        for (col=1; col<=row; col=col+1)
        {
        cout << "* ";
        }
        cout << endl;
    }
}
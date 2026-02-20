#include <iostream>
using namespace std;

int main() {

    // int row, col, n;
    // cout << "Enter the number: ";
    // cin >> n;
    // for (row = 1; row <= n; row = row+1)
    // {
    //     // Space print
    //     for (col = 1; col <= n-row; col = col+1)
    //     cout << "  ";
    //     // Star Print
    //     for (col = 1; col <= row; col = col+1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // for (int row = 1; row <= 4; row=row+1)
    // {
    //     for (int col = 1; col <= 4-row; col=col+1)
    //     {
    //         cout << "  ";
    //     }
    //     for (int col = 1; col <= row; col=col+1)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }


    // int row, col, n;
    // cout << "Enter the input: ";
    // cin >> n;
    // for (row = 1; row <= n; row=row+1)
    // {
    //     // Soace Print
    //     for (col = 1; col <= n-row; col=col+1)
    //     {
    //         cout << "  ";
    //     }
    //     // Number Print 
    //     for (col = 1; col <= row; col=col+1)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    

    // int row, col;
    // for ( row = 1; row <= 5; row++)
    // {
    //     for ( col = 1; col <=  5-row; col++)
    //     {
    //         cout << "  ";
    //     }
    //     for (char name = 'A'; name <= 'A'+row-1; name++)
    //     {
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }
    

    int row, col;
    for ( row = 1; row <= 5; row=row+1)
    {
        for ( col = 1; col <= 5-row; col=col+1)
        {
            cout << "  ";
        }
        for ( col = row; col >= 1; col= col-1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
}
#include <iostream>
using namespace std;

int main()
{
    // int row, col;
    // for (row=1; row<=5; row=row+1)
    // {
    //     for (col=1; col<=row; col=col+1)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = row; col >= 1; col=col-1)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row=1; row<=5; row=row+1)
    // {
    //     char name =  'a'+(row-1);
    //     for (col=1; col<=row; col=col+1)
    //     {
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row=1; row<=5; row=row+1)
    // {
    //     for (col=1; col<=5-(row-1); col=col+1)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row=5; row>=1; row=row-1)
    // {
    //     for (col=1; col<=row; col=col+1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row=1; row<=5; row=row+1)
    // {
    //     for (col=1; col<=5-(row-1); col=col+1)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row=5; row>=1; row=row-1)
    // {
    //     for (col=1; col<=row; col=col+1)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    int row, col;
    for (row = 1; row <= 5; row=row+1)
    {
        for (col = 5; col >= 5-(row-1); col=col-1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
}

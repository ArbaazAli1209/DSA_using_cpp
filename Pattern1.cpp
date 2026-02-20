#include <iostream>
using namespace std;

int main()
{
    // int row, col;
    // for (row = 1; row <= 5; row = row+1)
    // {
    //     for (col = 1; col <= 5; col = col+1)
    //     {
    //         cout << "*" << " ";
    //     }  
    //     cout << endl;  
    // }
    
    // int row, col;
    // for (row =1; row <= 4; row = row+1)
    // {
    //     for (col = 1; col <= 5; col = col+1)
    //     {
    //         cout << 10 << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row = 1; row <= 5; row = row+1)
    // {
    //     for (col = 1; col <= 5; col = col+1)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row = 1; row <= 5; row = row+1)
    // {
    //     for (col = 1; col <= 5; col = col+1)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row = 1; row <= 5; row = row+1)
    // {
    //     for (col = 5; col >= 1; col = col-1)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row = 1; row <= 5; row = row+1)
    // {
    //     for (col = 1; col <= 5; col = col+1)
    //     {
    //         cout << col*col << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;
    // for (row = 1; row <= 5; row = row+1)
    // {
    //     char name = 'a'+(row-1);
    //     for (col = 1; col <= 5; col = col+1)
    //     {
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (char col = 'a'; col <= 'e'; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    int row, col;
    int count = 1;
    for (row = 1; row <= 5; row = row+1)
    {
        for (col=1; col <= 5; col = col+1)
        {
            cout << count << " ";
            count = count+1;
        }
        cout << endl;
    }
    
}
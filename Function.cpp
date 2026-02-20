#include <iostream>
using namespace std;

// int Sum(int m, int n)   // Function Declare.
// {
//     int ans = m+n;  // Function Define.
//     return ans;
// }

// int Mul(int m, int n)
// {
//     int ans = m*n;
//     return ans;
// }

// void fun()
// {
//     cout << "Hello Coder Army!\n";
// }

// int main()
// {
//     int a, b;
//     cout << "Enter 2 numbers: ";
//     cin >> a >> b;

       // Function Call.
//     cout << "The Sum is: " << Sum(a,b);
//     cout << endl;
//     cout << "The Multiplication is: " << Mul(a,b);
//     cout << endl;
//     fun();
// }

// Prime Number and Factorial.
// bool Prime(int n)
// {
//     if (n<2)
//     return 0;
    
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         return 0;
//     }

//     return 1;   
// }

// int Fact (int n = 0)    // Default Parameter.
// {
//     int ans = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         ans = ans * i;
//     }
//     return ans;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter the number: ";
//     cin >> a >> b;

    // a is Prime or not.
    // cout << Prime(a)  << endl;
    // Factorial of a.
    // cout << Fact(a) << endl;
    // b is Prime or not.
    // cout << Prime(b) << endl;
    // Factorial if b.
    // cout << Fact(b) << endl;
    // b-a is Prime or not.
    // cout << Prime(b-a) << endl;
    // Factorial of b-a.
    // cout << Fact(b-a) << endl;
// }

// void Swap (int a, int b)  // Pass by Value.
// void Swap (int &a, int &b)  // Pass by Reference.
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }
// void Swap (int &c, int &d)  // Function overloading
// {
//     int r;
//     r = c;
//     c = d;
//     d = r;
// }
int main ()
{
    int a, b;
    cin >> a >> b;
    swap(a,b);          // swap inbuild function.
    cout << a << " " << b << endl;

    float f1 = 4.8, f2 = 3.6;
    swap (f1, f2);
    cout << f1 << " " << f2;
}
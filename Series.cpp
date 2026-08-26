#include <iostream>
using namespace std;

// char Convert(char name)
// {
//     char ans = name - 'a' + 'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cout << "Enter the Character: ";
//     cin >> name;
//     cout << "The convert is: " << Convert(name);
// }


// Armstrong Number.
int countDigit(int n)
{
    if (n == 0)
        return 1;

    int count = 0;

    while (n)
    {
        count++;
        n /= 10;
    }

    return count;
}

int Pow(int base, int exp) {
    int result = 1;
    while (exp--) result *= base;
    return result;
}

bool Armstrong(int num, int digit)
{
    int n = num; 
    int ans = 0;
    while (n)
    {
        int rem = n % 10;

        n /= 10;
        
        ans = ans + Pow(rem, digit);
    }
    return ans == num;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int digit = countDigit(num);

    if (Armstrong(num, digit))
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
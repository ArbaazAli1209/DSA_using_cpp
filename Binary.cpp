#include <iostream>
using namespace std;

int main()
{
    // Decimal to Binary.
    // int num, rem, ans = 0, mul = 1;
    // cout << "Enter the nember: ";
    // cin >> num;
    // while (num > 0)
    // {
        // Remainder
        // rem = num % 2;      // rem = num&1;
        // Quotient
        // num = num/2;        // num /= 2;        // num = num>>1;
        // ans
        // ans = rem*mul+ans;      // ans += rem * mul;
        // mul
        // mul = mul*10;       // mul *= 10;
    // }
    // cout << ans << endl;


    // Binary to Decimal.
    // int num;
    // cout << "Enter the binary number: ";
    // cin >> num;
    // int mul = 1, ans = 0, rem;

    // while (num>0)
    // {
        // Remainder
        // rem = num % 10;
        // num
        // num = num / 10;
        // ans
        // ans = mul * rem + ans;
        // mul
        // mul = mul*2;
    // }
    // cout << ans << endl;


    // Decimal to Octal.
    // int num;
    // cout << "Enter the Decimal number: ";
    // cin >> num;
    // int mul = 1, ans = 0, rem;

    // while (num>0)
    // {
        // Remainder
        // rem = num % 8;
        // num
        // num = num / 8;
        // ans
        // ans = mul * rem + ans;
        // mul
        // mul = mul*10;
    // }
    // cout << ans << endl;


    // Octal to Decimal.
    // int num;
    // cout << "Enter the Octal number: ";
    // cin >> num;
    // int mul = 1, ans = 0, rem;

    // while (num>0)
    // {
        // Remainder
        // rem = num % 10;
        // num
        // num = num / 10;
        // ans
        // ans = mul * rem + ans;
        // mul
        // mul = mul*8;
    // }
    // cout << ans << endl;


    // Binary to Octal.
    int num;
    cout << "Enter the binary number: ";
    cin >> num;
    int mul = 1, ans = 0, rem, mul1 = 1, ans1 = 0, rem1, octal = 0;

    // Binary to Decimal.
    while (num>0)
    {
        rem = num % 10;
        num = num / 10;
        ans = mul * rem + ans;
        mul = mul*2;
    }
    // Decimal to octal.
    ans1 = ans;
    while (ans1 > 0)
    {
        rem1 = ans1 % 8;
        ans1 = ans1 / 8;
        octal = rem1 * mul1 + octal;
        mul1 = mul1 * 10;
    }
    cout << "The octal number is: " << octal << endl;
    return 0;
}
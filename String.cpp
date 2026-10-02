#include <iostream>
using namespace std;

int main() {
    // char arr[] = {'a', 'p', 'p', 'l', 'e'};
    // cout << arr;     // this will print the whole array until it finds a null character
    // for (int i = 0; i < 5; i++) {
        // cout << arr[i];
    // }

    // char arr[20];
    // cin >> arr;
    // cout << arr;

    // string s = "apple";
    // cout << s;

    // string s;
    // cin >> s;
    // getline(cin, s);    // to read the whole line including spaces
    // cout << s << endl;
    // cout << s.size();    // to get the size of the string excluding the null character

    // string s1 = "Rohit", s2 = "Mohit";
    // string s3 = s1 + s2;
    // string s3 = s1.append(s2);   // to append s2 to s1
    // cout << s3 << endl;

    // s1.push_back('p');   // to add a character at the end of the string
    // s1.pop_back();   // to remove the last character from the string
    // s1 = s1 + 'p';    // to add a character at the end of the string
    // s1 = s1 + "pa";     // to add a string at the end of the string

    // string s1 = "Rohit Negi is a \"good\" boy";    // to add double quotes in a string
    // cout << s1;

    // string s = "\\0";    // to add a backslash in a string
    // cout << s;

    // Reverse string
    string s = "roht";

    int start = 0, end = s.size() - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout << s;
    // Size of string without using size() function
    int size = 0;
    while (s[size] != '\0') {
        size++;
    }
    cout << endl << size << endl;

    // Pallindrome string
    string s2 = "racecar";
    int start2 = 0, end2 = s2.size() - 1;
    while (start2 < end2) {
        if (s2[start2] != s2[end2]) {
            cout << "Not a Palindrome";
            return 0;
        }
        start2++, end2--;
    }
    cout << "Is a Palindrome";
    return 0;
}
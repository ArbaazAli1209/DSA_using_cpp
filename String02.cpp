#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Valid Palindrome (with filtering). O(n) time and O(1) space complexity.
bool isPalindrome(const string& s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
        } else if (!isalnum(s[right])) {
            right--;
        } else {
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
    }
    return true;
}

// Valid Anagram. O(n) time and O(1) space complexity.
bool isAnagram(const string& s, const string& t) {
    if (s.size() != t.size()) {
        return false;
    }
    int count[256] = {0}; // Assuming ASCII character set
    for (char c : s) {
        count[c]++;
    }
    for (char c : t) {
        count[c]--;
        if (count[c] < 0) {
            return false;
        }
    }
    return true;
}

// Reverse Words in a String. O(n) time and O(1) space complexity.
// void reverseWords(string& s) {
//     // Remove leading and trailing spaces
//     s.erase(0, s.find_first_not_of(' '));
//     s.erase(s.find_last_not_of(' ') + 1);

//     // Reverse the entire string
//     reverse(s.begin(), s.end());

//     // Reverse each word back to its original order
//     int start = 0;
//     for (int i = 0; i <= s.size(); i++) {
//         if (i == s.size() || s[i] == ' ') {
//             reverse(s.begin() + start, s.begin() + i);
//             start = i + 1;
//         }
//     }
// }

// Correcting the reverseWords function to handle multiple spaces and ensure proper formatting
void reverseWords(string& s) {
    // Step 1: Reverse the entire string
    reverse(s.begin(), s.end());

    int n = s.size();
    int writeIdx = 0;

    // Step 2: Reverse individual words and remove extra spaces
    for (int start = 0; start < n; start++) {
        if (s[start] != ' ') {
            // Add a single space before words (except the first word)
            if (writeIdx != 0) s[writeIdx++] = ' ';

            int end = start;
            while (end < n && s[end] != ' ') end++; // Find end of current word

            // Copy word to write position and reverse it
            int wordLen = end - start;
            reverse(s.begin() + start, s.begin() + end);
            for (int i = 0; i < wordLen; i++) {
                s[writeIdx++] = s[start + i];
            }

            start = end; // Move start pointer past the word
        }
    }

    s.resize(writeIdx); // Trim trailing leftover space/characters
}

int main() {
    string s = "anagram", t = "nagaram";
    isAnagram(s, t) ? cout << "The strings are anagrams." : cout << "The strings are not anagrams.";

    return 0;
}
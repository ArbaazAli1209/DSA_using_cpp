#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

// Count vowels and consonants in a string. O(n) time and O(1) space complexity.
void countVowelsConsonants(const string& s, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

// Valid Palindrome (with filtering). O(n) time and O(1) space complexity.
bool isPalindrome(const string& s) {
    int left = 0, right = (int)s.size() - 1;
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

// First non-repeating character: return its index, or -1. O(n) time and O(1) space complexity.
int firstNonRepeatingCharacter(const string& s) {
    int count[256] = {0}; // Assuming ASCII character set
    for (char c : s) {
        count[c]++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (count[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

// Longest common prefix of an array of strings. O(n*m) time and O(1) space complexity.
string longestCommonPrefix(const vector<string>& strs) {
    if (strs.empty()) 
    return "";

    int n = strs.size();

    for (int i = 0; i < (int)strs[0].size(); i++) {

        for (int j = 1; j < n; j++) {
            if (i >= (int)strs[j].size() || strs[j][i] != strs[0][i])
                return strs[0].substr(0, i);
        }
    }
    return strs[0];
}

// Longest substring without repeating characters. O(n) time, O(1) space.
int longestSubstringWithoutRepeating(const string& s) {
    // bool seen[256] = {false}; // Assuming ASCII character set
    // int left = 0, maxLength = 0;
    // for (int right = 0; right < s.size(); right++) {
    //     while (seen[s[right]]) {
    //         seen[s[left]] = false;
    //         left++;
    //     }
    //     seen[s[right]] = true;
    //     maxLength = max(maxLength, right - left + 1);
    // }
    // return maxLength;

    int last[256]; fill(last, last + 256, -1);
    int left = 0, best = 0;
    for (int r = 0; r < (int)s.size(); r++) {
        unsigned char c = s[r];
        left = max(left, last[c] + 1);
        last[c] = r;
        best = max(best, r - left + 1);
    }
    return best;
}

int main() {
    string s = "abcabcbb";
    int length = longestSubstringWithoutRepeating(s);
    cout << "Length of longest substring without repeating characters: " << length << endl;

    return 0;
}
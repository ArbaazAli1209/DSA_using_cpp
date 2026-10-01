#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// P0. Second Largest Element. O(n) time and O(1) space
int secondLargest(const vector<int>& arr) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int x : arr) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2 && x != max1) {
            max2 = x;
        }
    }
    return (max2 == INT_MIN) ? -1 : max2; // Return -1 if there is no second largest
}

// P1. Find largest and second largest element in one pass. O(n) time and O(1) space
pair<int, int> findMaxAndSecondMax(const vector<int>& arr) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for ( int x: arr) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        }
        else if (x > max2 && x != max1) {
            max2 = x;
        }
    }
    return {max1, max2};
}

// P2. Reverse an array in place. O(n) time and O(1) space
void reverseArray(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        swap(arr[l], arr[r]);
        l++; r--;
    }
}

// P3. Check an array is Sorted in non-decreasing order. O(n) time and O(1) space
bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// P4. Move all zeros to the end, no extra array. O(n) time and O(1) space
void moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int count = 0; // Count of non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }
    while (count < n) {
        arr[count++] = 0; // Fill remaining positions with zeros
    }
}

// P5. Rotate an array right by k steps. O(n) time and O(1) space
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) 
    return;
    k %= n; // In case k is greater than n
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

// P6. Given nums, return an array out where out[i] is the product of all elements except nums[i], without using division. O(n) time and O(1) space
vector<int> productExceptSelf(const vector<int>& nums) {
    int n = nums.size();
    vector<int> out(n, 1);
    
    // Calculate left products
    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        out[i] = leftProduct;
        leftProduct *= nums[i];
    }
    
    // Calculate right products and multiply with left products
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        out[i] *= rightProduct;
        rightProduct *= nums[i];
    }
    
    return out;
}
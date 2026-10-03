#include <iostream>
#include <vector>
using namespace std;

// P1. Binary Search & Insert Position. O(log n) time and O(1) space.
int searchInsert(const vector<int>& arr, int target) {
    int start = 0, end = (int)arr.size() - 1, mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == target){
            return mid;     // Found target at mid.
        }

        else if (arr[mid] < target) {
        start = mid + 1;    // Search Right half.
        }
        
        else {
            end = mid - 1;      // Search Left half.
        }
    }
    return start;      // Points to the insert position.
}

// P2. Find First and Last Position of Element in Sorted Array. O(log n) time and O(1) space.
vector<int> searchRange(const vector<int>& nums, int target) {
    int start = 0, end = (int)nums.size() - 1, first = -1, last = -1, mid;

    // Find first occurance.
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (nums[mid] == target){
            first = mid;
            end = mid - 1;      // Search left for first occurance.
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    // Find last occurance.
    start = 0, end = (int)nums.size() - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;

        if (nums[mid] == target){
            last = mid;
            start = mid + 1;      // Search right for last occurance.
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return {first, last};
}

// P3. Search in Rotated Sorted Array. O(log n) time and O(1) space.
int rotatedArray(const vector<int>& arr, int target) {
    int start = 0, end = (int)arr.size() - 1, mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Left side sorted.
        else if (arr[start] <= arr[mid]) {
            if (arr[start] <= target && arr[mid] > target) {
                end = mid - 1;
            }
            else 
            start = mid + 1;
        }

        // Right side sorted.
        else {
            if (arr[mid] < target && arr[end] >= target) {
                start = mid + 1;
            }
            else
            end = mid - 1;
        }
    }
    return -1;
}
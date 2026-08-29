#include <iostream>
using namespace std;

// int BinarySearch(int arr[], int n, int key){
//     int start = 0, end = n - 1, mid;

//     while(start <= end){
//         // Find mid
//         mid = start + (end - start) / 2;

//         // arr[mid] == key
//         if(arr[mid] == key){
//             return mid;
//         }
//         // arr[mid] < key
//         else if(arr[mid] < key){
//             start = mid + 1;
//         }
//         // arr[mid] > key
//         else{
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// Binary Search in decreasing order array
int BinarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1, mid;

    while (start <= end) {
        // Find mid
        mid = start + (end - start) / 2;

        // arr[mid] == key
        if (arr[mid] == key) {
            return mid;
        }
        // arr[mid] > key
        else if (arr[mid] > key) {
            start = mid + 1;
        }
        // arr[mid] < key
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[1000];
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    cout << "The key is found at index: " << BinarySearch(arr, n, key) << endl;

    return 0;
}
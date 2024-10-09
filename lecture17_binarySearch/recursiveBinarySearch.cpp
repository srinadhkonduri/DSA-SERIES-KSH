#include <iostream>
#include <vector>
using namespace std;

// Function to perform binary search recursively
int binarySearch(const vector<int>& arr, int low, int high, int key) {
    if (low > high) {
        return -1; // Base case: key not found
    }
    
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == key) {
        return mid; // Key found
    } 
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key); // Search the left half
    } 
    else {
        return binarySearch(arr, mid + 1, high, key); // Search the right half
    }
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int key = 10;
    
    int result = binarySearch(arr, 0, arr.size() - 1, key);
    
    if (result == -1) {
        cout << "Element not present in array" << endl;
    } 
    else {
        cout << "Element found at index " << result << endl;
    }
    
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
// creating a function of binary search
int binarySearch(vector<int> arr, int tar){
    int start = 0; int end = arr.size()-1;
    while(start <= end){
        // this is important optimization
        int mid = start + (end-start)/2;
        if(tar < arr[mid]){
            end = mid-1; // 1st half
        } else if(tar > arr[mid]){
            start = mid+1; // 2nd half
        } else {
            return mid;
        }
    }
    return -1; // element not found
}

// creating a recursive binary search function 
int recBinarySearch(vector<int> arr,int tar, int start, int end){
    if (start <= end){
        int mid = start + (end - start) / 2;

        if(tar > arr[mid]){
            recBinarySearch(arr,tar,mid+1,end);
        } else if(tar < arr[mid]){
            recBinarySearch(arr,tar,start,mid-1);
        } else {
            return mid;
        }
    }
    return -1; // value not found
}
int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;

    int ans = binarySearch(arr1,tar1);
    cout << "target = " << ans << endl;

    int ans2 = binarySearch(arr2,tar2);
    cout << "target = " << ans2 << endl;
    
    int ans3 = recBinarySearch(arr1, tar1, 0, arr1.size()-1);
    cout << "rec target is = " << ans3 << endl;
    return 0;
}
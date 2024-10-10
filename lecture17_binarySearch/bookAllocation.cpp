#include <iostream>
#include <vector>
using namespace std;
// creating isValid function
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int stu = 1, pages = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        } else {
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}
// creating a function for allocation the books
int allocateBooks(vector<int> &arr, int n, int m){ // O(log N * 2)
    // edge case
    if(m  > n){
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int ans = -1;
    int st = 0; int end = sum; // range of possible ans
    while(st <= end){
        int mid = st + (end - st) / 2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        } else{
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {15,17,20};
    int n = 3; // no of pages
    int m = 2; // no of students

    cout << allocateBooks(arr,n,m) << endl;
    return 0;
}
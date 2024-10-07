#include <iostream>
using namespace std;
// functions should always be written outside of the main function
int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; // not found
}
int main(){
// creating a function for linear search
    int arr[] = {12,45,34,23,78,43};
    int size = 6;
    int target = 23;

    // returning the output of the function
    cout << linearSearch(arr,size,target) << endl;
    return 0;
}
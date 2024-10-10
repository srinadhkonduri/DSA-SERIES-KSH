#include <iostream>
using namespace std;
// creating a function for insertion sort
void insertionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
    int curr = arr[i];
    int prev = i-1;
    // comparision happens in this second condition after (&&)
        while (prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

// creating a function to print the array
void printArray(int arr[], int n){
    for(int i = 0; i < n;  i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function
int main(){
    int arr[] = {4,1,3,2,5}; // declaring arr
    int n = 5; // declaring size of arr


    insertionSort(arr,n);
    cout << "sorted array is : ";
    printArray(arr,n); 

    return 0;
}
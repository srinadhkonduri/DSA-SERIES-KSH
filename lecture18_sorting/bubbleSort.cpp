#include <iostream>
using namespace std;
// creating a function for selection sort
void selectionSort(int arr[], int n){
    // outer loop
    for(int i = 0; i < n; i++){
        // inner loop
        int smallestIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i],smallestIndex);
    }
}
// creating a function for bubble sort
void bubbleSort(int arr[], int n){
    // some times the arr is already sorted in that case
    // we can perform an optimization
    bool isSwap = false;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){ // array is already sorted
            return;
        }
    }
}

// creating a function for printing the array
void printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// int main function
int main(){
    int arr[] = {4,2,3,1,5};
    int n = 5;

// calling bubble sort
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}
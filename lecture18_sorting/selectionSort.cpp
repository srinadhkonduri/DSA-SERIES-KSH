#include <iostream>
using namespace std;
// creating a function for selection sort
void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int smallestIndex = i;
        for(int j = i+1; j < n; j++){
            // the comparision happens in this line
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
}

// creating a function for printing the array
void printArray(int arr[], int n){
    for(int i = 0; i < n;  i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {4,1,3,2,5}; // declaring arr
    int n = 5; // declaring size of arr

    selectionSort(arr,n);
    cout << "sorted array is : ";
    printArray(arr,n); 
    return 0;
}
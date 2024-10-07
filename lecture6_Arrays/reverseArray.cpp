#include <iostream>
using namespace std;
// creating a function for reversing an array
void reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    // creating an array
    int arr[] = {4,7,3,8,2,9};
    int size = 6;

// calling the function
    reverseArray(arr,size);
    // printing the array using the for loop
    cout << "reversed Array : ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
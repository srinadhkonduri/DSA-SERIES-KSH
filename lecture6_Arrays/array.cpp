#include <iostream>
using namespace std;
int main(){
    // creating an array without the size for taking input
    // in c++ size should be allocated manually
    int size = 5;
    int marks[size];
    
    // creating a loop for taking input
    cout << "enter the array values :";
    for(int i = 0; i < size; i++){
        cin >> marks[i];
    }
    // creating a loop for bringing output from the loop
    for(int i = 0; i < size; i++){
        cout << marks[i] << endl;
    }
    return 0;
}
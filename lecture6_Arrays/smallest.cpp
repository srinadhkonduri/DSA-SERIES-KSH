#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size = 6;
    int nums[] = {12,45,-6,34,23,90};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;

    for(int i = 0; i < size; i++){
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
        
    }

    cout << "Smallest value: " << smallest << " at index: " << smallestIndex << endl;
    cout << "largest value: " << largest << " at index: " << largestIndex << endl;
    return 0;
}
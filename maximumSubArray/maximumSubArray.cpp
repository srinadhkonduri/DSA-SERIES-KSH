#include <iostream>
#include <climits>
using namespace std;
int main(){
    // just printing the elements in the array using subarray
    int n = 7;
    int arr[7] = {1,2,3,4,5,6,7};
    int arr2[7] = {3,-4,5,4,-1,7,-8};

    // normal approach tc = O(n3)
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i =st; i <=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // brute force approach TC = (On2)
    int maxSum = INT_MIN;
    for(int st = 0; st < n; st++){
        int currentSum = 0;
        for(int end = st; end < n; end++){
            currentSum += arr2[end];
            maxSum = max(currentSum,maxSum);
        }
    }
    cout << "maximum subArray sum = " << maxSum << endl;
    return 0;
}
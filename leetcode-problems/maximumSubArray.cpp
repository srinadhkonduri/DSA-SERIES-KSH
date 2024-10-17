#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// creating a function for maximum subArray
int maxSubArray(vector<int> &nums){
    // assign currentSum = 0;
    int currentSum = 0;
    // assign maxSum = intMin so it always loses with the comparing number
    int max_sum = INT_MIN;
    // iterate through the numbers using for loop
    for(int val : nums){
        currentSum += val;
        max_sum = max(currentSum, max_sum);
        //If 'currentSum' becomes negative, reset it to 0.
            // This is because if the running sum becomes negative, starting a 
            //new subArray from the next element would give a larger sum.
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return max_sum;
}
int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = maxSubArray(nums);
    cout << ans << endl;
    return 0;
}
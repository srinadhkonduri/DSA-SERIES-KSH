#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
// creating a function to returning the two sum
vector<int> twoSum(vector<int> &nums, int target){
    // getting the size of the nums
    int n = nums.size();
    // running a for loop to iterate all the elements in the array
    // outer loop picks the first element in the pair
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            // inner loop picks the second element in the array
            // to avoid collision and repeating pairs
            if(nums[i] + nums[j] == target){
                return{i,j}; // returning the sum of the target
            }
        }
    }
    return {}; // returning an empty vector
}
int main(){
    vector<int> nums = {2,7,9,10,15,17,19,22,26};
    int target = 19;

    vector<int> result = twoSum(nums, target);

// we should print the indexing of the array
    if(!result.empty()){
        cout << "answer index are : " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "no such numbers found";
    }
    cout << endl;

    return 0;
}
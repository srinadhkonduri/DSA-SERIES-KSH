#include <iostream>
#include <vector>
// LC = 238
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){
    // get the size of the nums
    int n = nums.size();
    // assigning the size and 1 value in the result vector
    // * important
    vector<int> result(n,1);

    // calculating the left products of the array
    int leftProduct = 1;
    for(int i = 0; i < n; i++){
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // calculating the right product of the array
    int rightProduct = 1;
    for(int i = n - 1; i>= 0; i--){
        // while assigning the *= is important for two statements
        // *= important
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Product of array except self : ";
    // running a for loop for printing the array
    for(int val : result){
        cout << val << " "; 
    }
    cout << endl;
    return 0;
}

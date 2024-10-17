#include <iostream>
#include <vector>

using namespace std;

int singleNumber(const vector<int>& nums) {
    int result = 0;
    // The XOR (^) operator is used in the loop. XOR has some important properties:
        // - x ^ x = 0 (XOR-ing a number with itself results in 0)
        // - x ^ 0 = x (XOR-ing a number with 0 results in the number itself)
        // - XOR is commutative and associative, meaning the order of operations 
        //doesn't matter
    for (int val : nums) {
        result ^= val;  // XOR all elements
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};  // Example input
    int uniqueElement = singleNumber(nums);
    
    cout << "The single number (unique element) is: " << uniqueElement << endl;

    return 0;
}

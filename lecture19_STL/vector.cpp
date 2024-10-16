#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec(10,2); // used in dynamic programming
    vector<int> vec1(vec); // assigning vec to vec1
    for(int val : vec1){
        cout << val << " ";
    }
    return 0;
}
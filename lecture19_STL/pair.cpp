#include <iostream>
#include <vector>
using namespace std;
int main(){
    pair<int,int> num = {1,2};
    pair<string,int> nums = {"srinadh",21};
    cout << num.first << " ";
    cout << endl;
    cout << nums.first << " ";
    cout <<endl;


    // pair<int, pair<string, int>> p = {1, {'tony',3}};

    vector<pair<int,int>> p = {{1,2},{2,3},{3,4},{4,5}};
    for(auto val: p){
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;
    return 0;
}
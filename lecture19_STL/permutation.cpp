#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// vector has always begin and end functions
int main(){
    vector<int> vec = {1,2,3,4,5};
    reverse(vec.begin(),vec.end());

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    string n = "abc";
    next_permutation(n.begin(),n.end());
    cout << n << endl;
    return 0;
}
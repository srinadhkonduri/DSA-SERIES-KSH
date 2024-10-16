#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <string>
using namespace std;
int main(){
    vector<int> num = {1,2,3,4,5};
    cout << binary_search(num.begin(),num.end(),3) << endl;
    int n = 15;
    long int n1 = 23;
    long long n2 = 34;
    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(n) << endl;
    cout << __builtin_popcountll(n) << endl;
    return 0;
}
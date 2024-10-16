#include <iostream>
#include <set>
// stores all unique values
// * insert , emplace , count , erase , find , size , empty , erase
// multiset unordered set
using namespace std;
int main(){
    set<int> set;
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(5);
    cout << set.size() << endl;
    for(int val : set){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
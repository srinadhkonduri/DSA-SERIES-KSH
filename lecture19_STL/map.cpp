#include <iostream>
#include <map>
#include <unordered_map>
// stores duplicate values also
// map<string, int> m;
// m["tv"] = 50; key = value
// for accessing the values use first and second
// functions of map
// * insert , emplace , count , erase , find , size , empty , erase
using namespace std; 
int main(){
    // tc = O(n)
    map<string,int> m;
    m["tv"] = 50;
    m["laptop"] = 50000;
    m["headphones"] = 2000;
    // the order is printing from bottom to top
    // sorting with the help of alphabets in ascending order
    for(auto p : m){
        cout << p.first << " " << p.second << endl; 
    }


    cout << "count of an laptop is :" << m["laptop"] << endl;
    return 0;


    // multimap
    multimap<string,int> mm;
    unordered_multimap<string,int> uom;

    // map and unordered map is difference in time complexity
    // tc = O(1)

}
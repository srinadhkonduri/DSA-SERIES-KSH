#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<char> chars = {'a','b','c','d','e','f'};
    cout << "size = " << vec.size() <<endl;
    for(int i : vec){
        cout << i << endl;
    }
    cout << endl;
    for(char val : chars){
        cout << val << endl;
    }
    cout << endl;

    return 0;
}
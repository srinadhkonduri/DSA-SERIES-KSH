#include <iostream>
// pattern 3
// A B C D
// A B C D
// A B C D
// A B C D
using namespace std;
int main(){
    int n = 4;
    for(int i = 1; i <= n; i++){ // outer
        char ch = 'A';
        for(int j = 1; j <= n; j++){
            cout << ch << " ";
            ch++; // while printing this pattern character
            // always store values in the form of ASCII values
        }
        cout << endl;
    }
    return 0;
}
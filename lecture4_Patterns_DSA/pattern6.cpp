#include <iostream>
// *
// * *
// * * *
// * * * *
using namespace std;
int main(){
    // for loop starting with i = 0 value in inner loop is j = i+1
    // for i = 1 inner loop value is j = i
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    // pattern 7 
    // 1 
    // 1 2
    // 1 2 3 
    // 1 2 3 4 
    int m = 4;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            // always incrementing the line j
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // pattern 8 
    // 1
    // 2 2
    // 3 3 3 
    // 4 4 4 4
    int s = 4;
    for (int i = 0; i <= s; ++i) {
        // Loop to print characters in each row
        for(int j = 0; j <= i; j++){
            cout << (i+1) << " ";
        }
        cout << endl;  // Move to the next line after each row
    }
    cout << endl;

    // pattern 9
    // A 
    // A B 
    // A B C 
    // A B C D
    int x = 4;
    for (int i = 1; i <= x; ++i) {
        // Loop to print characters in each row
        for (char ch = 'A'; ch < 'A' + i; ++ch) {
            cout << ch << " ";  // Print the character followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }
    return 0;
}
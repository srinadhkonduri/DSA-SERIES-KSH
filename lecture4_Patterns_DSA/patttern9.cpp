#include <iostream>
using namespace std;
// 1 1 1 1
//   2 2 2
//     3 3 
//       4
int main(){
    int n = 4;
    // outer loop
    for(int i = 0; i < n; i++){
        // spaces
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        // numbers
        for(int j = 0; j < n - i; j++){
            cout << (i + 1);
        }
        cout << endl;
    }

    // A A A A 
    //   B B B
    //     C C 
    //       D
    char ch = 'A';
    int m = 4;
    for(int i = 0; i < m; i++){
        // spaces
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        // character
        for(int j = 0; j < m - i; j++){
            cout << ch;
        }
        // the above for loops are same loops for printing spaces
        // and characters
        ch++;
        cout << endl;
    }
    return 0;
}
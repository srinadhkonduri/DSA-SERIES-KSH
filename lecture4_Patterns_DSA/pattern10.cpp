#include <iostream>
using namespace std;
//       1     
//     1 2 1   
//   1 2 3 2 1
// 1 2 3 4 3 2 1
int main(){
    int n = 4;
    // outer loop 
    for(int i = 0; i < n; i++){
        // spaces
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        // num 1
        for(int j = 1; j <= i+1; j++){
            cout << j;
        }
        // num 2 backward loop
        for(int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
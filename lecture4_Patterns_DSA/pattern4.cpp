#include <iostream>
// pattern 4 
// 1 2 3  
// 4 5 6 
// 7 8 9 
using namespace std;
int main(){
    int n =3;
    // take another variable of num = 1
    int num = 1;
    for(int i = 1; i <= n; i++){ // outer loop
        for(int j= 1; j <= n; j++){ // inner loop
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;

// pattern 5
// A B C 
// D E F
// G H I
    int m = 3;
    char ch = 'A';
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= m; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
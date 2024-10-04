#include <iostream>
// pattern 1,2
// 1 2 3 4 * * * *
// 1 2 3 4 * * * *
// 1 2 3 4 * * * *
// 1 2 3 4 * * * *
using namespace std;
int main(){
    int n;
    cout << "Enter the number of lines : ";
    cin >> n;
    for (int i = 1; i <= n; i++) { // outer loop 
        for(int j = 1; j <= n; j++){ // inner loop
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
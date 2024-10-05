#include <iostream>
using namespace std;
// creating a sum for printing sum of n numbers
int sum(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    cout << "sum = " << sum(10) << endl;
    // cout << "sum = " << sum(100) << endl;
    return 0;
}
#include <iostream>
using namespace std;
int factorial(int n){
    // for multiplication always use the loop from i = 1;
    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum *= i;
    }
    return sum;
}
int main(){
    cout << "fact = " << factorial(5) << endl;
    return 0;
}
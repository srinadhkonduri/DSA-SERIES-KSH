#include <iostream>
using namespace std;
// sum of individual digits
int sum(int n){
    int digSum = 0;
    while (n > 0)
    {
        int lastDig = n % 10;
        n /= 10;
        digSum += lastDig;
    }
    return digSum;
    
}
int prod(int n){
    int prod = 1;
    while(n > 0){
        int lastDig = n % 10;
        n /= 10;
        prod *= lastDig;
    }
    return prod;
}
int main(){
    cout << "sum = " << sum(145) << endl;
    cout << "prod = " << prod(145) << endl;
    return 0;
}
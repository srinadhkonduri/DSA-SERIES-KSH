#include <iostream>
using namespace std;
// a function should be always written in above the main scope
int sum(int a, int b){
    int s = a + b;
    return s;
}
// creating a function for min of 2 numbers
int min(int a, int b){
    if (a < b)
    {
        return a;
    } else {
        return b;
    }
    
    
}
int main(){
    cout << "sum = " << sum(4,5) << endl;
    cout << "min = " << min(5,6) << endl;
    return 0;
}
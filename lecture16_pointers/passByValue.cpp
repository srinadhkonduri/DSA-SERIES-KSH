#include <iostream>
using namespace std;
void changeA(int a){ // pass by value
    a = 20;
}
void changeB(int *b){ // pass by reference
    *b = 20;
}
int main(){
    int a = 10;
    int b = 10;
    // here we are creating a value for updating the a but it
    // does nit work because it is pass by value
    changeA(a); // pass by value
    changeB(&b); // pass by reference
    cout << a << endl;
    cout << b << endl;
    return 0;
}
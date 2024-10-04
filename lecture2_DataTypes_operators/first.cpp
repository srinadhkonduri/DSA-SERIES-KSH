#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter the value of a and b : ";
    cin >> a ;
    cin >> b;
    cout << "------------" << endl;
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << (a != b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    return 0;
}
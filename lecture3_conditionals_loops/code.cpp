#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "you grade is a\n";
    } else if (marks >= 80 && marks<= 90)
    {
        cout << "your grade is b\n";
    } else if (marks >=70 && marks <= 80)
    {
        cout << "your grade is c\n";
    } else if (marks <= 70)
    {
        cout << "your grade is d\n";
    } else {
        cout << "you failed\n";
    }
    
    return 0;
}
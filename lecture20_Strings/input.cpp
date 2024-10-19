#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    // taking input using character
    // basically while taking input from strings the string will
    // be deleted after space
    // specially we should use the function
    // cin.getline() for taking input from string
    char str[8];
    cout << "enter the char : ";
    cin.getline(str,8); // here $ is a delimiter
    // the input entering after the dollar symbol will get terminated
    cout << "output = ";
    for(char ch : str){
        cout << ch << " ";
    }

    return 0;
}
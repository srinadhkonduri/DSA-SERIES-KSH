#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    // strings are suported for normal operators = concatenation
    // comparision
    // in c++ strings are dynamically allocated
    string str = "hello world"; // runtime = resize
    cout << str << endl;
    string name = " Tony Stark";
    cout << name << endl;
    string value = str + name;
    cout << value << endl;
    cout << (str == name) << endl;

    return 0;
}
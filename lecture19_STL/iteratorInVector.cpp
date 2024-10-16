#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> vec1 = {5,6,7,8,9};
    // vector<int>::iterator it;
    // forward vector
    // by assigning auto the c++ will automatically generate
    // the following iterator 
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;
    
    // backward vector
    // vector<int>::reverse_iterator *itt;
    for(auto itt = vec1.rbegin(); itt != vec1.rend(); itt++){
        cout << *(itt) << " ";
    }
    return 0;
}
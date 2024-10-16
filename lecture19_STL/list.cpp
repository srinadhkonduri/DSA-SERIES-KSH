#include <iostream>
#include <list>
#include <deque>
// list is internally implemented as doubly linked list
using namespace std;
int main(){
    list<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    num.pop_back();
    for(int val : num){
        cout << val << " ";
    }
    cout << endl;


    // deque list : double ended queue
    // dequeue : popping elements from a normal queue
    // push_front 
    // push_back pop_front pop_back erase clear empty insert
    // all these functions are accessible in the deque  
    deque<int> d = {1,2,3,4,5};
    for(int val : d){
        cout << val << " ";
    }
    
    return 0;
}
#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // priority queue is visualized as stack
    // tc = O(log n)
    priority_queue<int> pq;
    priority_queue<int, vector<int>,greater<int>> s;
    // the above syntax is functor used to print reverse order
    // priority queue
    // top pop size empty push,emplace
    return 0;
}
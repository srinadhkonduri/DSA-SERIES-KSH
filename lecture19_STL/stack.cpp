// stack operations 
// push  = pushing elements, emplace , top , pop , size , empty, swap 
// | a | 
// | b |
// | c | 
// | d | 
// | e |
// |_f_|

#include <iostream>  // Preprocessor directive to include standard I/O library
#define MAX 5  // Preprocessor directive to define the maximum size of the stack

using namespace std;

class Stack {
    int top;  // This keeps track of the index of the top element
    int arr[MAX];  // Array to store stack elements

public:
    Stack() {
        top = -1;  // Initialize stack as empty
    }

    // Function to add an element to the stack
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }

    // Function to remove an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << arr[top--] << " popped from stack\n";
    }

    // Function to return the top element of the stack
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;

    // Perform stack operations
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "Top element after popping two elements: " << s.peek() << endl;

    return 0;
}

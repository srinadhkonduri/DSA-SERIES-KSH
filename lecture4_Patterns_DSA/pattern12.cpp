#include <iostream>
using namespace std;
int main() {
    int n = 4;
    // top part
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars and spaces
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                std::cout << "*"; // Print the stars
            } else {
                cout << " "; // Print spaces for hollow effect
            }
        }
        cout << endl;
    }

    // Lower part
    for (int i = n - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars and spaces
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                cout << "*"; // Print the stars
            } else {
                cout << " "; // Print spaces for hollow effect
            }
        }
        cout << endl;
    }
    return 0;
}

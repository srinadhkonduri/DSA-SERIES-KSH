//          *
//        * * *
//      * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          * 
#include <iostream>

int main() {
    int n = 5; // Height of the diamond

    // Print the upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }
        // Print stars
        for (int j = 1; j < (2 * i); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Print the lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = n; j > i; j--) {
            std::cout << " ";
        }
        // Print stars
        for (int j = 1; j < (2 * i); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

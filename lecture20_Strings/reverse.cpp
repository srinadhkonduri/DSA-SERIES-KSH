#include <iostream>
#include <cstring> // for strlen()
#include <bits/stdc++.h>
#include <string>
void reverseCharArray(char arr[]) {
    int start = 0;
    int end = strlen(arr) - 1;

    // Swap the characters from the start and end moving towards the center
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char arr[] = "Hello, World!";
    std::cout << "Original array: " << arr << std::endl;

    reverseCharArray(arr);
    std::cout << "Reversed array: " << arr << std::endl;
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm> // for transform()
using namespace std;

bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;

    // Compare characters from the start and end moving towards the center
    while (start < end) {
        // Skip non-alphanumeric characters (optional)
        while (start < end && !isalnum(str[start])) start++;
        while (start < end && !isalnum(str[end])) end--;

        // Compare characters (ignoring case)
        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

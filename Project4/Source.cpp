#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    bool palindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";

    return 0;
}
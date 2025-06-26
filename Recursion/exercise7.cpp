/*
 * Exercise 7: Palindrome
 * Create a recursive function that checks whether a given string is a palindrome
 * (reads the same from left to right and from right to left).
 * Expected result: for the string "radar" the function should return true (or output "palindrome"),
 * and for "dough" - false.
 */

#include <iostream>

using namespace std;

bool Palindrome(string s){
    int i = 0;
    if ((s[0] == s[s.size()-1]) || (s.size() == 3)){ // Base case
        return true;
    } else {
        return false;
    }
    return Palindrome(s.substr(i, s.size()-i)); // Recursive case
}

int main(){
    string s = "radar";
    string answer = (Palindrome(s) == 1) ? "Yes" : "No";
    cout << "Is " << s << " palindrome? " << answer << endl;
}
/*
 * Exercise 8: Recursive string reversal.
 * Write a function reverseString(string s) that recursively prints the characters of a string in reverse order.
 */

#include <iostream>

using namespace std;

void reverseString(string s){
    if (s.empty()) return; // Base case
    reverseString(s.substr(1));
    cout << s[0]; //
}

int main(){
    string s = "Hello";
    reverseString(s);
}
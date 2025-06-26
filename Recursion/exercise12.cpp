/*
 * Exercise 12: Generating permutations.
 * Write a recursive function that prints all permutations of a given string (or set of characters).
 */


#include <iostream>

using namespace std;
void generate_permutations(string s, string prefix = "") {
    if (s.empty()) {
        cout << prefix << endl; // Base case
        return;
    }
    for (size_t i = 0; i < s.size(); ++i) {
        string rem = s.substr(0, i) + s.substr(i + 1);
        generate_permutations(rem, prefix + s[i]);
    }
}

int main(){
    string s1 = "ABC";
    generate_permutations(s1);
}
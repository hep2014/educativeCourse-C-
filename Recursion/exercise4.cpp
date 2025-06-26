/*
 * Exercise 4: Translation into binary system
 * Create a recursive function toBinary(int x) ,
 * which prints the binary representation of a non-negative integer x.
 * Expected result: When the input is 13, the program should print 1101 (the binary representation of 13).
 */

#include <iostream>

using namespace std;

void to_binary(int x){
    if (x == 0){
        return; // Base case
    }
    // Recursive case
    to_binary(x / 2);
    cout << x % 2;
}

int main(){
    // Testing
    for (int i = 1; i < 10; ++i){
        cout << "Binary representation of " << i << " is ";
        to_binary(i);
        cout << endl;
    }
}
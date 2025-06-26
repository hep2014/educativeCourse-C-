/*
 * Exercise 1: Factorial Calculation
 * Write a recursive function factorial(int n) that
 * returns the factorial of n . Base case: 0! = 1 .
 * Expected result: factorial(5) should return 120 (since 5! = 120).
 */

#include <iostream>
using namespace std;

int Factorial(int n){
    if (n == 0){
        return 1; // Base case
    } else{
        return n * Factorial(n-1); // Recursive case
    }
}

int main(){
    int tests[10];
    // Tests filling up and Testing the Factorial function
    for (int i = 0; i < 10; ++i) {
        tests[i] = i;
        cout << "Factorial of " << tests[i] << " is: " << Factorial(tests[i]) << endl;
    }
    return 0;
}
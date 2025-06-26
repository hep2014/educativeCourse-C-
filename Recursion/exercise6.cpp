/*
 * Exercise 6: Exponentiation.
 * Write a function power(a, n) that recursively computes (a is a number, n is a non-negative exponent).
 * Expected result: power(3, 4) returns 81 (since 3^4 = 81).
 */

#include <iostream>

using namespace std;

int power(int a, int n){
    if (n == 0){
        return 1; // Base case
    } else{
        return a * power(a, n-1); // Recursive case
    }
}

int main(){
    // Filling up tests and testing
    for (int i = 0; i < 5; ++i){
        cout << "Number " << i*3 << " in exponent " << i << " is " << power(i*3, i) << endl;
    }
    return 0;
}
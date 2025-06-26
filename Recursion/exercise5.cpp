/*
 * Exercise 5: Euclidean algorithm (GCD).
 * Implement a recursive algorithm for calculating the greatest common divisor (GCD) of two numbers a and b.
 * Expected result: gcd(48, 18) should return 6.
 */

#include <iostream>

using namespace std;

int gcd(int numberA, int numberB){
    if (numberB == 0){
        return numberA; // Base case
    } else {
        return gcd(numberB, numberA % numberB); // Recursive case
    }
}

int main(){
    int testCaseA[10];
    int testCaseB[10];
    // Filling up testCaseA and testCaseB and Testing gcd
    for (int i = 0; i < 10; ++i){
        testCaseA[i] = 124 + 10 * (i % 4);
        testCaseB[i] = 12 + (i % 3);
        cout << "great common divisor of " << testCaseA[i] << " and " << testCaseB[i] << " is " << gcd(testCaseA[i], testCaseB[i]) << endl;
    }
    return 0;
}
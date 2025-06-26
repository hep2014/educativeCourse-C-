/*
 * Exercise 2: Fibonacci Sequence
 * Implement a recursive function fibonacci(int n) to
 * compute the n-th Fibonacci number (F(0)=0, F(1)=1). Expected result:
 * fibonacci(7) should return 13 (the sequence starts as 0,1,1,2,3,5,8,13,...).
 */

#include <iostream>

using namespace std;

int Fibonacci(int n){
    if (n == 0){
        return 0; // Base case for F(0)
    } else if (n == 1){
        return 1; // Base case for F(1)
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2); // Recursive case
    }
}

int main(){
    int tests[10];
    // Tests filling up and Testing the Fibonacci function
    for (int i = 0; i < 10; ++i) {
        tests[i] = i;
        cout << "Fibonacci of " << tests[i] << " is: " << Fibonacci(tests[i]) << endl;
    }
    return 0;
}
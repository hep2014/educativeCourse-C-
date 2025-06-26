/*
 * Exercise 3: Sum of digits of a number
 * Write a recursive function that takes an integer and
 * returns the sum of its digits.
 * Expected result: for the input 83569, the function should return 31 (since 8+3+5+6+9 = 31).
 */

#include <iostream>

using namespace std;

int Sum_of_digits(int number){
    if (number == 0){
        return 0; // Base case
    } else {
        return (number % 10) + Sum_of_digits(number / 10); // Recursive case
    }
}

int main(){
    int tests[10];
    // Tests filling up and Testing the Sum_of_digits function
    for (int i = 0; i < 10; ++i) {
        tests[i] = i * 1000 + 83569;
        cout << "Sum of digits of " << tests[i] << " is: " << Sum_of_digits(tests[i]) << endl;
    }
}
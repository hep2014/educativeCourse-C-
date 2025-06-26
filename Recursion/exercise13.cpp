/*
 * Exercise 13: Catalan numbers.
 * Implement a recursive function catalan(n) that computes the n-th Catalan number using the recurrence formula.
 * Expected result: catalan(4) should return 14.
 */


#include <iostream>

using namespace std;

double arrayOfItems[50];

double catalan_numbers(int n){
    if (n == 0){
        return 1; // Base case
    }
    // Checking memory
    if (arrayOfItems[n] != -1){
        return arrayOfItems[n];
    }
    // Recursive case
    else{
        arrayOfItems[n] = 0;
        for (int i = 0; i < n; ++i){
            arrayOfItems[n] += catalan_numbers(i) * catalan_numbers(n-i-1);
        }
        return arrayOfItems[n];
    }
}

int main(){
    // Filling up array with -1
    for (int i = 0; i < 50; ++i){
        arrayOfItems[i] = -1;
    }
    // Testing
    for (int i = 0; i < 10; ++i){
        cout << catalan_numbers(i) << endl;
    }
}
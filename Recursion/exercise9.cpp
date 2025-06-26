/*
 * Exercise 9: Maximum in array.
 * Define a function maxArray(int arr[], int n) that recursively finds the maximum element in an array arr of length n.
 */

#include <iostream>

using namespace std;

int maxArray(int arr[], int n){
    if (n == 1){
        return arr[0]; // Base case
    } else {
        int maxRest = maxArray(arr, n-1);
        return (maxRest > arr[n-1]) ? maxRest : arr[n-1]; // Recursive case
    }
}

int main(){
    int arr[5] = {1, 2, 3, 10, 4};
    // Testing
    cout << maxArray(arr, 5) << endl;
}
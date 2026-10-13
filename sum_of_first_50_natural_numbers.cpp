/*
 * Program Title: Sum of First 50 Natural Numbers
 * Name: Ghulam Fatima
 * Registration Number: L1S24BSCS0217
 * Assignment Number: Assignment 01
 */

#include <iostream>

using namespace std;

int calculateSumLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n = 50;
    cout << "Sum of first 50 natural numbers (loop): " << calculateSumLoop(n) << endl;
    return 0;
}

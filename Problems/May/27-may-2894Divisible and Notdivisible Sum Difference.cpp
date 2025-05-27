//POTD - 27 May 2025
// Problem: Given two integers n and m, find the difference between the sum of all numbers from 1 to n that are not divisible by m and the sum of all numbers from 1 to n that are divisible by m.
// Example: For n = 10 and m = 3, the output should be 37.
//Appproach 1
#include<iostream>
using namespace std;

int differenceOfSum(int n, int m) {
    int num1 = 0; // Count of numbers divisible by m
    int num2 = 0; // Count of numbers not divisible by m

    for (int i = 1; i <= n; i++) {
        if (i % m == 0) {
            num1+=i;
        } else {
            num2+=i;
        }
    }
    return num2 - num1; // Moved return outside the loop
}

int main() {
    int n, m;
    cin >> n >> m;
    int result = differenceOfSum(n, m);
    cout << result << endl;
    return 0;
}
//Approach 2

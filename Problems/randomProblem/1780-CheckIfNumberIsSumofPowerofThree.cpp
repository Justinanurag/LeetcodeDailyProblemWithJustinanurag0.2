#include<iostream>
#include<cmath>
using namespace std;
bool checkPowersOfThree(int n) {
    long long p = 0;
    while (pow(3, p) <= n) {
        p++;
    }
    p--;
    while (n > 0 && p >= 0) {
        if (n >= pow(3, p)) {
            n -= pow(3, p);
            p--;
        } else {
            p--;
        }
    }

   
    return n == 0;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (checkPowersOfThree(n))
        cout << n << " can be represented as a sum of distinct powers of 3.\n";
    else
        cout << n << " cannot be represented as a sum of distinct powers of 3.\n";
    
    return 0;
}
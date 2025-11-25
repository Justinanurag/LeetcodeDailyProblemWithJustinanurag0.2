#include <iostream>
using namespace std;

int smallestRepunitDivByK(int k)
{
    // base case: numbers made only of 1's can't be divisible by 2 or 5
    if (k % 2 == 0 || k % 5 == 0)
        return -1;

    long long num = 0;  

    for (int length = 1; length <= k; length++)
    {
    
        num = (num * 10 + 1) % k;

        if (num == 0)
        {
            return length; 
        }
    }
    return -1;
}

int main()
{
    int k = 3;
    int result = smallestRepunitDivByK(k);
    cout << "The length of the smallest repunit divisible by " << k << " is: " << result << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

long long maxSubarraySum(vector<int> &nums, int k)
{
    int n = nums.size();
    // step 1: Prefix Sum Array
    vector<long long> prefSum(n);
    prefSum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefSum[i] = prefSum[i - 1] + nums[i];
    }
    long long result = LLONG_MAX * -1;
    // Step 2: Try all k-based starting points
    for (int start = 0; start < k; start++)
    {
        long long currentSum = 0;
        int i = start;
        while (i + k - 1 < n)
        {
            int j = i + k - 1;
            // Calculate subarray sum using prefix sum
            long long subarraySum = prefSum[j] - (i > 0 ? prefSum[i - 1] : 0);
            // Kadane style update
            currentSum = max(subarraySum, currentSum + subarraySum);
            result = max(result, currentSum);
            i = i + k;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-1, -2, -3, -4, -5};
    int k = 4;
    long long result = maxSubarraySum(nums, k);
    cout << "The maximum subarray sum with step size " << k << " is: " << result << endl;

    return 0;
}
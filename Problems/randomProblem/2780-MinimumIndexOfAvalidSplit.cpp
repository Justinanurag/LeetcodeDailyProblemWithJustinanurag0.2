#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int minimumIndex(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;

    // Populate mp2 with frequency of each element
    for (int num : nums) { 
        mp2[num]++;
    }

    for (int i = 0; i < n; i++) {
        int num = nums[i];
        mp1[num]++;
        mp2[num]--;

        int n1 = i + 1;
        int n2 = n - i - 1;

        if (mp1[num] > n1 / 2 && mp2[num] > n2 / 2) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 2, 2};
    cout << minimumIndex(nums) << endl;
    return 0;
}

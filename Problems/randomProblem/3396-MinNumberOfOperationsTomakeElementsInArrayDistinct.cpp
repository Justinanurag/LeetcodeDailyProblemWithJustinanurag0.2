#include <iostream>
#include <unordered_set>
#include <vector>
#include <cmath> // For ceil function
using namespace std;
// Method 1: Using a brute-force approach to check for duplicates
/*
int n;

bool check(vector<int>& nums, int start){
    unordered_set<int> st;
    for(int j = start; j < n; j += 3){
        if(st.count(nums[j])){
            return false; // Duplicate found
        }
        st.insert(nums[j]);
    }
    return true; // No duplicates found
}

int minimumOperations(vector<int>& nums) {
    n = nums.size();
    int ops = 0;
    for(int i = 0; i < 3; ++i){
        if(!check(nums, i)){
            ops++;
        }
    }
    return ops;
}*/

//Method 2: Using a set to track duplicates
int minimumOperations(vector<int>& nums){
    unordered_set<int> st;
    int n=nums.size();
    for(int i=n-1;i>=0;i--){
        if(st.count(nums[i])){
            return ceil((i+1)/3.0);
        }
        st.insert(nums[i]);
    }
    return 0;

}

int main(){
    vector<int> nums = {1,2,3,4,2,3,3,5,7};
    int result = minimumOperations(nums);
    cout << "Minimum number of operations: " << result << endl; 
    return 0;
}

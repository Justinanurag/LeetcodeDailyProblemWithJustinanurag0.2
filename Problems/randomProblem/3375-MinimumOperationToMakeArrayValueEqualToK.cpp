//09-April-2025
// Problem: 3375. Minimum Operation to Make Array Value Equal to K
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int minimumOperations(vector<int>& nums,int k){
    unordered_set<int> st;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]<k){
            return -1;
        }
        else if(nums[i]>k){
            st.insert(nums[i]);
        }
    }
    return st.size();
}
int main(){
    vector<int> nums = {5,2,5,4,5};
    int k = 2;
    int result = minimumOperations(nums,k);
    cout << "Minimum number of operations: " << result << endl;
    return 0;
}
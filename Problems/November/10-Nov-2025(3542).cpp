#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int minOperations(vector<int>& nums){
    stack<int> st;
    int operation=0;
    for(int i=0;i<nums.size();i++){
        while(!st.empty() && st.top()>nums[i]){
            st.pop();
        }
        if(nums[i]==0) continue;
        if(st.empty() || st.top()<nums[i] ){
            st.push(nums[i]);
            operation++;
        }
    }
    return operation;
}
int main() {
    vector<int> nums = {5, 6, 7, 6, 7, 6, 5, 5, 5};
    cout << minOperations(nums) << endl;
    return 0;
}
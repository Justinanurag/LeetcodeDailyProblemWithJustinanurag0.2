//Date 06-may-2025
//Problem-1920.Build Array From Permutation
#include<iostream>
#include<vector>
using namespace std;

vector<int> buildArray(vector<int>& nums){
     int n=nums.size();
    vector<int> ans(n);//ans nam ka ek vector bnye aur uska size define kiye 
    for(int i=0;i<n;i++){
        ans[i]=nums[nums[i]];
    }
   return ans;
}
int main(){
    vector<int> nums={0,2,1,5,3,4};
    vector<int> ans=buildArray(nums);
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
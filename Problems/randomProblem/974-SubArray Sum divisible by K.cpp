//Brute Force Approach
// Time Complexity: O(n^2)

/*#include<iostream>
#include<vector>
using namespace std;
int subarraysDivByK(vector<int>& nums, int k){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
            if(sum%k==0) count++;
        }
    }
    return count;
        
    }
int main(){
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    int ans = subarraysDivByK(nums,k);
    cout<<ans<<endl;

    return 0;
}*/


//Optimized Approach

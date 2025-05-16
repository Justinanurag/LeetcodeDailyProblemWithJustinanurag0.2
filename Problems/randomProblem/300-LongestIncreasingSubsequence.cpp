//Problem: Longest Increasing Subsequence
//Problem link: https://leetcode.com/problems/longest-increasing-subsequence/
// problem number: 300

//Method 1: Using recursion


/*#include<iostream>
#include<vector>
using namespace std;
int n;
int solve(vector<int>& nums,int i,int prev){
   if(i==n) return 0;
   int take=0;
   if(prev==-1 || nums[i]<nums[prev]){
      take=1+solve(nums,i+1,i);

   }
   int skip=solve(nums,i+1,prev);
   return max(take,skip);
}
int lengthOfLIS(vector<int>& nums) {
    n=nums.size();

    return solve(nums,0,-1);

}
int main(){
    vector<int> nums={10,9,2,5,3,7,101,18};
    cout<<lengthOfLIS(nums)<<endl;
    
    return 0;
}*/

/*
//By using memoization to optimize the above code
#include<iostream>
#include<vector>
#include <string.h>
using namespace std;
int n;
int t[2501][2501];//For memorization 
int solve(vector<int>& nums,int i,int prev){
    if(i==n) return 0;
    if(prev!=-1 && t[i][prev]!=-1){
        return t[i][prev];
    }
    int take=0;
    if(prev==-1 || nums[i] > nums[prev]){
        take=1+solve(nums,i+1,i);
    }
    //Skip 
    int skip=solve(nums,i+1,prev);
    if(prev!=-1){
        t[i][prev]=max(take,skip);
    }
    return  max(take,skip);
}
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0,-1);
    }
int main(){
    vector<int> nums={10,9,2,5,3,7,101,18};
    cout<<lengthOfLIS(nums)<<endl;

    return 0;
}*/
//Method 3: By using Bottom up DP
#include<iostream>
#include<vector>
#include<algorithm>
#include <string.h>
#include<math.h>
using namespace std;
 int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
    if (n == 0) return 0;
    vector<int> T(n, 1); // Initialize DP array with 1s
    int maxLIS = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(nums[j] < nums[i]){
                T[i] = max(T[i], T[j] + 1);
            }
        }
        maxLIS = max(maxLIS, T[i]);
    }
    return maxLIS;
 }
int main(){
    vector<int> nums={10,9,2,5,3,7,101,18};
    cout<<lengthOfLIS(nums)<<endl;
    
    return 0;
}
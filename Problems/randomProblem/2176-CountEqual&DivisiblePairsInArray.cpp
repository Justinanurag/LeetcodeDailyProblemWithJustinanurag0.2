// Date 17/04/2025
// Problem number 2176
// Problem name Count Equal & Divisible Pairs In Array
// Problem link https://leetcode.com/problems/count-equal-and-divisible-pairs-in-array/description/

#include<iostream>
#include<vector>
using namespace std;
int countPairs(vector<int>& nums,int k){
    int count = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(nums[i]==nums[j] && (i*j)%k==0){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> nums = {1,2,3,4};
int k =1;
cout<<countPairs(nums,k)<<endl;

    return  0;
}
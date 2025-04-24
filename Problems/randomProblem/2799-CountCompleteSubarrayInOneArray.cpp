// Date:24/04/2025
// Problem link: https://leetcode.com/problems/count-complete-subarrays-in-an-array/description/
// problem Number:2799
// Problem: Count Complete Subarrays in an Array

#include<iostream>
#include<vector>
#include<unordered_set>
#include <unordered_map>
using namespace std;
int countCompleteSubarrays(vector<int>& nums){
    int n=nums.size();
    int res=0;
    int i=0;
    int j=0;
    unordered_set<int> st(nums.begin(),nums.end());//to check the unique elements in the array
    int c=st.size();//count of unique elements in the array
    //sabki freq check karne ke liye map use karenge
    unordered_map<int,int> mp;
    while(j<n){
        mp[nums[j]]++;//freq badhyange current element ki
        while(mp.size()==c){//mtlbb ki complete subArray mil gya
            res=res+(n-j);//j se lekar n tak jitne bhi elements hain un sabke liye complete subArray mil gya
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;

        }
        j++;
    }
    return res;
}

int main(){
    vector<int> nums={1,3,1,2,2};
    cout<<countCompleteSubarrays(nums)<<endl;

    return 0;
}
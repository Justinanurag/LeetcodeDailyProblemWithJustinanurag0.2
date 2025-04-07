// Problem: 2560. House Robber IV
//Date 15 march 2025
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool  canStealKHouse( const vector<int> &nums,int k,int capabilities){
    int n=nums.size();
    int i=0;
    long long count=0;
    while(i<n){
        if(nums[i]<=capabilities){
            count++;
            i=i+2;
        }
        else{
            i++;
        }
        if(count>=k){
            return true;
        }
    }
    return false;

}

int minCapability(vector<int> &nums ,int k){
    int left=*min_element(nums.begin(),nums.end());
    int right=*max_element(nums.begin(),nums.end());
    //using binary search
    while(left<right){
        int mid=(left+right)/2;
        if(canStealKHouse(nums,k,mid)){
            right=mid;
        }
        else{
            left=mid+1;
        }
    }
    return left;
}
int main(){
    vector<int> nums={2,3,5,9};
    int k=2;
    cout<<minCapability(nums,k);
    return 0;
}
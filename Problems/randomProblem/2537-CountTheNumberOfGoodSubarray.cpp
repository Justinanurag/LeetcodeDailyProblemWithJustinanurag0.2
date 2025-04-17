//Date 16/04/2025
// Problem number 2537      
// Problem name Count The Number Of Good Subarray
// Problem link https://leetcode.com/problems/count-the-number-of-good-subarrays/description/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
long long countGood(vector<int> arr,int k){
    int n=arr.size();
    long long result=0;
    long long pair=0;
    unordered_map<int,int> mp;
;
    int i=0,j=0;
    while(j<n){
        pair+=mp[arr[j]];
        mp[arr[j]]++;
        while(pair>=k){
            result+=n-j;
            mp[arr[i]]--;
            pair-=mp[arr[i]];
            i++;
        }
        j++;

    }
    return result;
}
int main(){
    vector<int> arr={1,1,1,1,1};
    int k=10;
    cout<<countGood(arr,k)<<endl;

    return 0;
}
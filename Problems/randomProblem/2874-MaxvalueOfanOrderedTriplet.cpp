#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long maximumTripletValue(vector<int>& nums) {
    int n=nums.size();
    long long ans=0;
    vector<int> leftmaxi(n);
    vector<int> rightmaxk(n);
    for(int j=1;j<n;j++){
        leftmaxi[j]=max(leftmaxi[j-1],nums[j-1]);
    }
    for(int j=n-2;j>=0;j--){
        rightmaxk[j]=max(rightmaxk[j+1],nums[j+1]);
    }
    for(int j=1;j<n;j++){
        ans=max(ans,(long long)(leftmaxi[j]-nums[j])*rightmaxk[j]);
    }
    return ans;
}
int main(){
    vector<int> nums = {12,6,1,2,7};
    cout << maximumTripletValue(nums) << endl;

    return 0;
}
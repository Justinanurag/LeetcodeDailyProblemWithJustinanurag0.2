#include<iostream>
#include<vector>
using namespace std;
vector<bool> prefixesDivBy5(vector<int>& nums) {
    vector<bool> ans;
    int mod=0;
    for(int bit:nums){
        mod=(mod*2+bit)%5;
        ans.push_back(mod==0);
    }
    return ans;
}
int main(){
    vector<int> nums={1, 0, 1, 1};
    vector<bool> result=prefixesDivBy5(nums);
    for(bool res:result){
        cout << (res ? "true " : "false ");
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int n;
int solveFun(int i,int total,vector<int>& nums){
    if(i==n) return total;
    int x=nums[i];
    int taken=solveFun(i+1,total^x,nums);
    int not_taken=solveFun(i+1,total,nums);
    return taken+not_taken;
}
int subsetXORSum(vector<int>& nums) {
    n=nums.size();
    return solveFun(0,0,nums);
}
int main(){
    vector<int> nums = {1,3};
    cout << subsetXORSum(nums) << endl;
    return 0;
}

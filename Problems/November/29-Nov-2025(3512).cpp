#include<iostream>
#include<vector>
using namespace std;
int minOperations(vector<int>& nums,int k){
    int ops=0;
    for(int num:nums){
        ops=(ops+(num%k))%k;
    }
    return ops;
}
int main(){
    vector<int> nums = {3,9,7}; 
    int k = 4;
    int result=minOperations(nums,k);
    cout << "Minimum operations = " << result << endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int maximumCount(vector<int>& nums) {
    int n=nums.size();
    int countPositive=0;
    int countNegative=0;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            countPositive++;
        }
        else{
            countNegative++;
        }
    }
    return max(countPositive,countNegative);
 }
int main(){
    vector<int> arr={-2,-1,-1,1,2,3};
    cout<<maximumCount(arr)<<endl;
    return 0;
}
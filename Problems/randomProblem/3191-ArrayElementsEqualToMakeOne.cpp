#include<iostream>
#include<vector>
using namespace std;

int minOperations(vector<int>& nums) {
    int n=nums.size();
      int count =0; 
      for(int i=0;i<n-2;i++){
        if(nums[i]==0){
            nums[i]^=1;
            nums[i+1]^=1;
            nums[i+2]^=1;
            count++;
        }
      }
      if(nums[n-1]==1 && nums[n-2]==1){
        return count;
      }
      else{
        return -1;
      }
}

int main() {
    vector<int> nums = {0, 1, 1, 1, 0, 0};
    cout << minOperations(nums) << endl;
    return 0;
}

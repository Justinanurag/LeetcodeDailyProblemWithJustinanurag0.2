/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*long long maximumTripletValue(vector<int>& nums) {
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
}*/

//mathod 2
        /*long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size();
            if (n < 3) return 0;  // Triplet is not possible if there are less than 3 elements
    
            int leftMax = nums[0];  // Maximum value seen so far on the left
            long long result = 0;
    
            for (int j = 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    result = max(result, (long long)(leftMax - nums[j]) * nums[k]);
                }
                leftMax = max(leftMax, nums[j]); // Update leftMax for the next iteration
            }
    
            return result;
        }
    
int main(){
    vector<int> nums = {12,6,1,2,7};
    cout << maximumTripletValue(nums) << endl;

    return 0;
}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long maximumTripletValue(vector<int>& nums){
    int n=nums.size();
    long long ans=0;
    long long leftmax=nums[0];
    for(int j=1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            ans=max(ans,(long long)(leftmax-nums[j])*nums[k]);
        }
        leftmax=max(leftmax,(long long)nums[j]);
    }
    return ans;
}
    int main(){
        vector<int> nums = {12,6,1,2,7};
        cout << maximumTripletValue(nums) << endl;
    
        return 0;
    }
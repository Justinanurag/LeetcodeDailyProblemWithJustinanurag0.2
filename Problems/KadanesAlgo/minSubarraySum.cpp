#include<iostream> 
#include<vector>
#include<climits>
using namespace std;
int minSubArraySum(vector<int> &arr) {
    int n=arr.size();
    int minSum=INT_MAX;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        minSum=min(sum,minSum);
        if(sum>0) sum=0;
    }
return minSum;
}
int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<"Minimum SubArray sum: "<<minSubArraySum(arr)<<endl;
    return 0;
}
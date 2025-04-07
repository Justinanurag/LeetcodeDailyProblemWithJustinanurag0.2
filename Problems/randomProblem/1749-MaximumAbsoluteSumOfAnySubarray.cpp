#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int MaxAbsoluteSum(vector<int> arr){
    int n = arr.size();
    int sum=0,maxSum=0,minSum=0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
     maxSum=max(maxSum,sum);
     minSum=min(minSum,sum);
    }
    return abs(maxSum-minSum);
}
int main(){
    vector<int> arr={2,-5,1,-4,3,-2};
    cout<<"Maximum Absolute Sum: "<<MaxAbsoluteSum(arr)<<endl;
    return 0;
}
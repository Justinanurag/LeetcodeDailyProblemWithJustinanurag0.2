#include<iostream>
#include<vector>
#include <climits> 
using namespace std;
//BruteForceApproach
/*int minSubArraySum(vector<int> arr){
    int n = arr.size();
    int minSum = INT_MAX;
    for (int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            minSum=min(minSum,sum);
        }
    }
    return minSum;
}*/
//OptimalApproach(kadanes Algo)
int minSubArraySum(vector<int> arr){
    int n = arr.size();
    int minSum = INT_MAX;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        minSum=min(minSum,sum);
        if(sum>0) sum=0;
    }
    return minSum;
}

int main(){
vector<int> arr= {3, -4, 2, -3, -1, 7, -5};
cout << "Minimum Subarray Sum: " << minSubArraySum(arr) << endl;
    return 0;
}
//Date 14/04/2025
// Problem number 1534
// Problem name Count Good Triplets
#include<iostream>
#include<vector>
using namespace std;
        int countGoodTriplate(vector<int>& arr,int a,int b,int c){
            int n=arr.size();
            int count=0;
            for (int i = 0; i < n - 2; i++) {
                for (int j = i + 1; j < n - 1; j++) {
                    if (abs(arr[i] - arr[j]) <= a) {
                        for (int k = j + 1; k < n; k++) {
                            if (abs(arr[j] - arr[k]) <= b &&
                                abs(arr[i] - arr[k]) <= c) {
                                count++;
                            }
                        }
                    }
                }
            }
            return count;
        }
int main(){
    vector<int> arr={1,1,2,2,3};
    int a=0,b=0,c=1;
    cout<<countGoodTriplate(arr,a,b,c)<<endl;

    return 0;
}
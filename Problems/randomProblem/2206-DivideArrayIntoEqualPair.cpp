#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divideArray(vector<int> &arr){
    int n = arr.size();
 if(n%2!=0) return false;
 sort(arr.begin(),arr.end());
 for(int i=0;i<n;i+=2){
    if(arr[i]!=arr[i+1]) return false;
 }
 return true;
}
int main(){
   vector<int> arr= {3,2,3,2,2,2};
    if(divideArray(arr)){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;

}
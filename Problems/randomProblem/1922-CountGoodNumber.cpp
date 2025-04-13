// problem number 1922 
// problem name-Count Good Numbers
// 13/04/2025
//Daily problem of leetcode
#include<iostream>
using namespace std;
int M=1e9+7;
 int findPower(long long a,long long b){
    if(b==0) return 1;
    long long half=findPower(a,b/2);
    long long result=(half*half)%M;
    if(b%2==1) result=(result*a)%M;
 }
int countGoodNumbers(long long n){
    return(long long)findPower(5,(n+1)/2)*findPower(4,n/2)%M;
}
int main(){
    long long n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<countGoodNumbers(n);
    return 0;
}
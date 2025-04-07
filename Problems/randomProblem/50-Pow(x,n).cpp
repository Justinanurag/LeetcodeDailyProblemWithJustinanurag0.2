#include<iostream>
using namespace std;
double solve(double x,long n){
    if(n==0) return 1;
    if(n<0) return solve(1/x,-n);
    if(n%2==0){
        return solve(x*x,n/2);
    } 
    else{
        return x*solve(x*x,(n-1)/2);  
      }
}
double myPow(double x, int n){
    return solve(x,(long)n);
}
int main(){
  
        double x = 2.0;
        int  n = 10;
        cout << myPow(x, n) << endl; // Output: 1024.0000
    return 0;
}
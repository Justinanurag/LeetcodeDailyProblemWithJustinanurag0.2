#include<iostream>
using namespace std;
int hammingWeight(int n){
    int count = 0;
    while(n){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter Number: ";
    cin >> n;
    cout <<"Number of one bit is: "<< hammingWeight(n) << endl;
    return 0;
}
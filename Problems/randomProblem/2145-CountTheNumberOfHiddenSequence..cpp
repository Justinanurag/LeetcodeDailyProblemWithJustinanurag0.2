//Day-21 
//Date-21/04/2025
// Problem link: https://leetcode.com/problems/count-the-number-of-hidden-sequences/description/

#include<iostream>
#include<vector>
using namespace std;
int numberOfArray(vector<int>& differences,int lower,int upper){
    int curr=0;
    int minVal=0;
    int maxVal=0;
    for(int &d:differences){
        curr+=d;
        minVal=min(minVal,curr);
        maxVal=max(maxVal,curr);
        if((upper-maxVal)-(lower-minVal)+1 <=0){
            return 0;
        }
    }
    return (upper-maxVal)-(lower-minVal)+1;
}
int main(){
    vector<int> differences={1,-3,4};
    int lower=1,upper=6;
    cout<<numberOfArray(differences,lower,upper)<<endl;
    return 0;
}
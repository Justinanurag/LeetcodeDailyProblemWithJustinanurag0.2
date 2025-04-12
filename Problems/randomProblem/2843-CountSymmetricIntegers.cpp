//DATE 11-4-2025
//problem link:- https://leetcode.com/problems/count-symmetric-integers/description/?envType=daily-question&envId=2025-04-11
#include<iostream>
using namespace std;
int countSymmetricIntegers(int low,int high){
    int count=0;
    for(int num=low;num<=high;num++){
        string  str=to_string(num);
        int len=str.length();
        //base case 
        if(len%2!=0) continue;
        int half=len/2;
        int firstHalfSum=0;
        int secondHalfSum=0;
        //first half sum
        for(int i=0;i<half;i++){
            firstHalfSum+=str[i]-'0';
        }
        //second half sum
        for(int i=half;i<len;i++){
            secondHalfSum+=str[i]-'0';
        }
        //now check sum is equal or not
    if(firstHalfSum==secondHalfSum){
        count++;
    }
    }
    return count;

}
int main(){
    int low,high;
    cout<<"Enter the range of integers: ";
    cin>>low>>high;
    cout<<"Number of symmetric integers in the range: "<<countSymmetricIntegers(low,high)<<endl;
    
    return 0;
}
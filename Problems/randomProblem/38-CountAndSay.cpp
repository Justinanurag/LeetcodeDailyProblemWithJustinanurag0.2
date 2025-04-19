//Date :18/04/2025
//Problem: Count and Say
//problem number: 38
//Link: https://leetcode.com/problems/count-and-say/description/
#include<iostream>
#include<string>
using namespace std;
    string countAndSay(int n){
        //Base Case
        if(n==1) return "1";
        string say=countAndSay(n-1);
        //Processing the string
        string result="";
        for(int i=0;i<say.length();i++){
            int count=0;
            char ch=say[i];
            while(i<say.length()-1 && say[i]==say[i+1]){
                count++;
                i++;
            }
            result+=to_string(count+1)+string(1,ch);

        }
        return result;
    }
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    string result=countAndSay(n);
    cout<<"The "<<n<<"th term in the count and say sequence is: "<<result<<endl;

    return 0;
}
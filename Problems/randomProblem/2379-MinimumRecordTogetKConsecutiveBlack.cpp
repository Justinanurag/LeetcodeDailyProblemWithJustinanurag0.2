#include<iostream>
#include<string>
#include <math.h>
using namespace std;
int minimumRecolors(string blocks, int k) {
    int n=blocks.length();
    int result=k;
    for(int i=0;i<=n-k;i++){
        int count=0;
        for(int j=i;j<i+k;j++){
            if(blocks[j]=='W'){
                count++;
            }
        }
     result=min(result,count);
    }
   return  result;
}
int main(){
    string blocks="WBBWWBBWBW";
    cout<<minimumRecolors(blocks,7)<<endl;
    return 0;
}

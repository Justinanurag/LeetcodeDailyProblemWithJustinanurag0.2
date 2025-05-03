//problem number=1007
//Date:03/05/2025

#include<iostream>
#include<math.h>
#include<vector>
#include <climits>
using namespace std;
int find(vector<int> tops,vector<int> bottoms,int val){
    //Check for tops and bottoms
    int n=tops.size();
    int swapTop=0;
    int swapBottom=0;
    for(int i=0;i<n;i++){
        if(tops[i]!=val && bottoms[i]!= val){
            return -1;
        }
        else if(tops[i]!=val){
            swapTop++;
        }
        else if(bottoms[i]!=val){
             swapBottom++;
        }
    }
    return min(swapTop,swapBottom);
}
int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
    int result=INT_MAX;
    for (int val=1;val<=6;val++){
        int step=find(tops,bottoms,val);
        if(step!=-1){
            result=min(result,step);
        }
    }

   return result==INT_MAX ? -1: result;
}
int main(){
    vector<int> tops = {2, 1, 2, 4, 2, 2};
    vector<int> bottoms = {5, 2, 6, 2, 3, 2};

    cout << minDominoRotations(tops, bottoms) << endl;
    return 0;
}

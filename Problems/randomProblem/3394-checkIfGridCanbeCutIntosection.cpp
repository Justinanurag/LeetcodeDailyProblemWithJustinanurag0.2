#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
//merge interval function
vector<vector<int>> merge(vector<vector<int>>& intervals){
    int n = intervals.size();
    if(n == 0) return {};
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> result;
    for(int i=0;i<n;i++){
        if(result.empty()|| result.back()[1]<intervals[i][0]){
            result.push_back(intervals[i]);
        }
        else{
            result.back()[1] = max(result.back()[1],intervals[i][1]);
        }
    }
    return result;
}
// check for valid cut
bool checkValidCuts(int n,vector<vector<int>>& rectangles){
    //x-axis
    vector<vector<int>> horizontal;
    //y-axis
    vector<vector<int>> vertical;
    for(auto &coord:rectangles){
        int x1=coord[0];
        int y1=coord[1];
        int x2=coord[2];
        int y2=coord[3];
        horizontal.push_back({x1,x2-1});
        vertical.push_back({y1,y2-1});
    }
    //merge horizontal intervals
    vector<vector<int>> result1 = merge(horizontal);
    if(result1.size()>=3)
    return true;
    //merge vertical intervals
    vector<vector<int>> result2 = merge(vertical);
    return result2.size()>=3;
}
int main(){
    vector<vector<int>> rectangles = {{1,0,5,2}, {0,2,2,4}, {3,2,5,3},{0,4,4,5}};
    cout<<boolalpha<<checkValidCuts(3,rectangles)<<endl;
    return 0;
}
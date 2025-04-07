#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std; 
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n=intervals.size();
    vector<vector<int>> ans;
    //first sort the intervals 
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<n;i++){
        if(ans.empty()|| ans.back()[1]<intervals[i][0]){
            ans.push_back(intervals[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans=merge(intervals);
       // Print merged intervals
       for (const auto& interval : ans) {
        cout << "{"<<interval[0] << " " << interval[1]<<"}" << endl;
    }
    return 0;
}
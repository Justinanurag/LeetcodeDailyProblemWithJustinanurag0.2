#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int countDays(int days,vector<vector<int>>& meetings){
    int n=meetings.size();
    sort(begin(meetings),end(meetings));
    int result=0;
    int end=0;
    for(auto &meet:meetings){
        if(meet[0] > end){
            result+=meet[0]-end-1;
        }
        end=max(end,meet[1]);
    }
    if(days>end){
        result+=days-end;
    }
    return result;
}
int main(){
    int days=10;
    vector<vector<int>> meetings={ {5,7},{1,3},{9,10}};
    cout<<countDays(days,meetings)<<endl;
    return 0;
}
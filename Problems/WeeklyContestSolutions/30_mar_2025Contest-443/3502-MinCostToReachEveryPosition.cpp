#include<iostream>
#include<vector> 
using namespace std;
vector<int> minCosts(vector<int>& cost) {
    int n=cost.size();
    vector<int> ans;
    int mi=cost[0];
    ans.push_back(mi);
    for(int i=1;i<n;i++){
        mi=min(mi,cost[i]);
        ans.push_back(mi);

    }
    return ans;
}

int main() {
    vector<int> cost = {5, 3, 4, 1, 3, 2};
    vector<int> ans = minCosts(cost);

    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
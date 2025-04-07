/*#include<iostream>
#include<vector>
 #include<unordered_map> 
#include<algorithm>
using namespace std;
vector<vector<int>> mergeArrays(vector<vector<int>> &arr1,vector<vector<int>> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    unordered_map<int,int> mp;
    vector<vector<int>> result;
    for(int i=0;i<m;i++){
        int id=arr1[i][0];
        int val=arr2[i][1];
        mp[id]+=val;

    }
    for(int i=0;i<n;i++){
        int id=arr2[i][0];
        int val=arr2[i][1];
        mp[id]+=val;
    }
    for(auto &it:mp){
        int key=it.first;
        int val=it.second;
        result.push_back({key,val});
    }
    sort(begin(result),end(result));
    return result;

}

int main(){
    vector<vector<int>> arr1={{1,2},{2,3},{4,5}};
    vector<vector<int>> arr2={{1,4},{3,2},{4,1}};
    vector<vector<int>> result=mergeArrays(arr1,arr2);
for (const auto& pair : result) {
    cout << "{" << pair[0] << ", " << pair[1] << "} ";
}
    return 0;
}*/

// Method 2:Using ordered map
#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<int>> mergeArrays(vector<vector<int>> &arr1, vector<vector<int>> &arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<vector<int>> result;
    map<int, int> mp;

    for (int i = 0; i < n; i++) { 
        int id = arr1[i][0];
        int val = arr1[i][1];
        mp[id] += val;
    }

    for (int i = 0; i < m; i++) {  
        int id = arr2[i][0];
        int val = arr2[i][1];
        mp[id] += val;
    }

    for (auto &it : mp) {
        result.push_back({it.first, it.second});
    }

    return result;
}

int main() {
    vector<vector<int>> arr1 = {{1, 2}, {2, 3}, {4, 5}};
    vector<vector<int>> arr2 = {{1, 4}, {3, 2}, {4, 1}};

    vector<vector<int>> result = mergeArrays(arr1, arr2);

    for (const auto &pair : result) {
        cout << "{" << pair[0] << ", " << pair[1] << "} ";
    }
    cout << endl;

    return 0;
}

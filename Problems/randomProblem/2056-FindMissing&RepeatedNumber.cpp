#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> findMissingNumber(vector<vector<int>>& grid){
    int n=grid.size();
    //total number of elements in the grid is n*n
    int N=n*n;
    unordered_map<int,int> mp;
    int a=-1;//For repeated number
    int b=-1;//For missing number
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mp[grid[i][j]]++;

        }
    }
    for(int num=1;num<=N;num++){
        if(!mp.count(num)){
            b=num;
        }
        else if(mp[num]==2){
            a=num;
        }
    if(a!=-1 && b!=-1){
        break;
    }
}
return {a,b};

}
int main() {
    vector<vector<int>> grid = {{1, 3}, {2, 2}};
    vector<int> res = findMissingNumber(grid);

    // Output the result
    cout << "Duplicate number: " << res[0]<< endl;
    cout << "Missing number: " << res[1] << endl;
    cout << "{" << res[0] << ", " << res[1] << "}" << endl;

    return 0;
}
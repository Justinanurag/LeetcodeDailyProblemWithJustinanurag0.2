#include<iostream>
#include<vector>
using namespace std;
int n;
long long solve(int i,vector<vector<int>>& questions,vector<long long>& t){
    if(i>=n) return 0;
    if(t[i]!=-1) return t[i];
    long long taken=questions[i][0]+solve(i+questions[i][1]+1,questions,t);
    long long not_taken=solve(i+1,questions,t);
    return t[i]=max(taken,not_taken);
}
long long mostPoints(vector<vector<int>>& questions) {
    n = questions.size();
    vector<long long> t(n+1,-1);
    return solve(0, questions, t);
}
int main(){
    vector<vector<int>> questions = {{3, 2}, {4, 3}, {4, 4}, {2, 5}};
    cout << mostPoints(questions) << endl;

    return 0;
}
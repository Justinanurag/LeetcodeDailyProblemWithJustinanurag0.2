// Problem:Rabbits in Forest
// Date: 18/04/2025
// Problem number: 781
// Link: https://leetcode.com/problems/rabbits-in-forest/description/
#include<iostream>
#include<unordered_map>
#include<vector>
#include<cmath>
using namespace std;
int numRabbits(vector<int>& answer){
    unordered_map<int,int> mp;
    for(int x=0;x<answer.size();x++){//Count krega ki kitne baar answer[x] aya hai
        mp[answer[x]]++;
    }
    int totalRabbits=0;
    for(auto it:mp){
        int x=it.first;//kya hai answer[i]
        int count=it.second;//kya hai answer[i] ka count

        int groupSize=(x+1);//kya hai answer[i] ka group size

        int groupCount=ceil((double)count/groupSize);//kya hai answer[i] ka group count

         totalRabbits+=groupCount*groupSize;//kya hai answer[i] ka total rabbits
    }
    return totalRabbits;
}
int main(){
    vector<int> answer={1,1,2};
    int result=numRabbits(answer);
    cout<<"Total number of rabbits: "<<result<<endl;

    return 0;
}
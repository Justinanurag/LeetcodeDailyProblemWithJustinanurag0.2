#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    bool checkHammingDistanceOne(string &s1,string &s2){
        int diff=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                diff++;
            }
            if(diff>1){
                return false;
            }
        }
        return diff==1;
    }
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=words.size();
        vector<int> dp(n,1);//dp[i]==longest subsequence length ending at index i
        vector<int> parent(n,-1);
        int longestSubsequence=1;
        int longestSubsequenceIdx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i-1;j++){
                if(groups[j]!=groups[i] 
                && words[i].length()==words[j].length()  
                        && checkHammingDistanceOne(words[i],words[j])){
                            if(dp[j]+1>dp[i]){
                                dp[i]=dp[j]+1;
                                parent[i]=j;
                                if(longestSubsequence<dp[i]){
                                    longestSubsequence=dp[i];
                                    longestSubsequenceIdx=i;

                                }
                            }
                        } 
            }
        } 
        vector<string> result;
        while(longestSubsequenceIdx!=-1){
            result.push_back(words[longestSubsequenceIdx]); 
            longestSubsequenceIdx=parent[longestSubsequenceIdx];
        }
        reverse(begin(result),end(result));
        return result;
    }
    int main(){
        vector<string> words={"bab","dab","cab"};
        vector<int> groups={1,2,2};
        vector<string> result=getWordsInLongestSubsequence(words,groups);
        for(auto &word:result){
            cout<<word<<" ";
        }
        cout<<endl;
        return 0;
    }
  
#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> getLongestSubsequence(vector<string> &words,vector<int> & groups){
    int n=words.size();
    vector<string> result;
    for(int i=0;i<n;i++){
        if(i==0 || groups[i]!=groups[i+1]){
            result.push_back(words[i]);
        }
    }
    return result;

}
int main() {
    vector<string> words = {"e","a","b"};
    vector<int> groups = {1, 1, 2, 2, 3};

    vector<string> result = getLongestSubsequence(words, groups);

    cout << "Resulting subsequence: ";
    for (const string &word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
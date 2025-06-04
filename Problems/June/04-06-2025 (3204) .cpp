#include <iostream> 
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
   string answerString(string word, int numFriends) {
    int n=word.length();
    //Base case 
    if(numFriends==1) return word;
    string result;
    int longestPossible=n-(numFriends-1);
    for(int i=0;i<n;i++){
        int canTakeLength=min(longestPossible,n-i);
        result=max(result,word.substr(i,canTakeLength));
    }
    return result;
   }
int main(){
    string word="dbca";
    int numFriends = 2;
    string result = answerString(word, numFriends);
    cout << "Result: " << result << endl;
    return 0;
}
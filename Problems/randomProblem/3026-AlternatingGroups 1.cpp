#include<iostream>
#include<vector>
using namespace std;
int numberOfAlternatingGroups(vector<int>& colors) { 
    int n=colors.size();
    int count=0;
    for(int i=0;i<n;i++){
        int left=(i-1+n)%n;
        int right=(i+1)%n;
        if(colors[left]!=colors[i] && colors[right]!=colors[i]){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> arr={0,1,0,0,1};
    cout<<numberOfAlternatingGroups(arr)<<endl;
    return 0;
    }
#include<iostream>
#include<vector>
using namespace std;
vector<int> pivotArray(vector<int> arr,int pivot){
    int n=arr.size();
    vector<int> lessThanpivot;
    vector<int> equalTopivot;
    vector<int> greaterThanpivot;
    for(int i=0;i<n;i++){
        if(arr[i]<pivot){
            lessThanpivot.push_back(arr[i]);
        }
        else if(arr[i]==pivot){
            equalTopivot.push_back(arr[i]);
        }
        else{
            greaterThanpivot.push_back(arr[i]);
        }
    }
        for(int &num:equalTopivot){
            lessThanpivot.push_back(num);
        }
        for(int &num:greaterThanpivot){
            lessThanpivot.push_back(num);
    }
    return lessThanpivot;
}

int main(){
    vector<int> arr={9,12,5,10,14,3,10};
    int pivot=10;
   vector<int> result = pivotArray(arr,pivot);
      // Print the sorted pivot array
      for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

/*class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> lesspivot;
        vector<int> equalpivot;
        vector<int> greaterpivot;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                lesspivot.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                greaterpivot.push_back(nums[i]);
            }
            else{
                equalpivot.push_back(nums[i]);
            }
        }
        for(int &num: equalpivot){
            lesspivot.push_back(num);
        }
        for(int &num: greaterpivot){
            lesspivot.push_back(num);
        }
        return lesspivot;
    }    
};*/
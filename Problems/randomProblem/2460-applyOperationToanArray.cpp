#include<iostream>
#include<vector>
using namespace std;
int applyOperations(vector<int> &arr){
    int n=arr.size();
    //Step 01: Applying Operations
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            arr[i] *= 2;
            arr[i+1]=0;
            i++;
        }
    }

//Move Non zero elements to left of array 
int index=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[index],arr[i]);
        index++;
    }   
}
    return 0;
}
int main(){
    vector<int> arr={1,2,2,1,1,0};
    applyOperations(arr);

    // Output the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
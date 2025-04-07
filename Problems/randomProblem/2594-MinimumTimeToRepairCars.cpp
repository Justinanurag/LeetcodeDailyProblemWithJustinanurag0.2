#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &ranks,int min,int cars){
    int carFixed=0;
    for(int i=0;i<ranks.size();i++){
        if(ranks[i]<=min){
            carFixed++;
        }
    }
    return carFixed>=cars;
}
long long repairCars(vector<int> &ranks,int cars){
    int n = ranks.size();
    int maxR=*max_element(begin(ranks),end(ranks));
    int l=1;
    int r=maxR;
    int result=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(isPossible(ranks,mid,cars)==true){
            result=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return result;
}
int main(){
    vector<int> ranks={4,2,3,1};
    int carsToRepair=10;
    cout<<repairCars(ranks,carsToRepair)<<endl;
    return 0;
}
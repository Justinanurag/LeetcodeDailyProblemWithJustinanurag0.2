#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumCandies(vector<int>& candies, long long k) {
    int n = candies.size();
    int maxC = *max_element(candies.begin(), candies.end());

    // Brute force approach (Corrected)
   /* for (int c = maxC; c >= 1; c--) {
        long long count = 0; // Use long long to avoid overflow
        for (int i = 0; i < n; i++) {
            count += candies[i] / c; // How many children can get c candies
        }
        if (count >= k) {
            return c; // Maximum possible candies per child
        }
    }
    
    return 0; // If no valid distribution is possible
}*/

//Optimal solution using binary search
int  low = 1, high = maxC;
int ans=0;
while(low<=high){
    int mid = low + (high-low)/2;
    long long count = 0;
    for(int i = 0; i<n; i++){
        count =count+ candies[i]/mid;
    }
    if(count>=k){
        ans = mid;
        low = mid+1;
    }else{
        high = mid-1;
    }
}
return ans;
}

int main() {
    vector<int> candies = {5,6,8};
    long long k = 3;
    cout <<"Output:Maximum "<< maximumCandies(candies, k) << " Candies can give to each child"<< endl; 
    return 0;
}

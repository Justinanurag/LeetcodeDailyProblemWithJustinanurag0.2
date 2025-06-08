#include<iostream>
#include<vector>
using namespace std;
vector<int> lexicalOrder(int n){
    vector<int> res;//create a vector store the answer
    int count=1; //start from 1 the first number in dictionary order
    for(int i=0;i<n;i++){
        res.push_back(count);//add current number to the result
        if(count*10 <=n){
            count*=10;
        } else{
            if(count >=n) count /=10;
            count++;
            while (count % 10 ==0) count /=10;
        }
    }
    return res;

}
int main(){
    int n=13;
      vector<int> result = lexicalOrder(n);

    cout << "Lexicographical order from 1 to " << n << ":\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
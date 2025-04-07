// #include<iostream>
// using namespace std;
// int main(){
//      int n=5;
//      //numbr of rows
//      for (int i = 1; i <= n; i++) {
//         //print space
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //print star
//             for(int j=1;j<=i;j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int i=n; i>=0; i--){
        for (int j=1; j<=i; j++){ 
        cout<<"*";
        }
       cout<<endl;

}
}
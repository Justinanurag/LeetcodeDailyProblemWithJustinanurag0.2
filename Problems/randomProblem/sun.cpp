// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: " << endl;
//     cin >> n;

//     int count = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             count = count + 1;
//             cout << count << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//   cout<<"enter a number :"<<endl;
//   cin>>n;
//   int count=0;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){  
//         count++;    
//         cout<<count<<" ";
//         // cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
   
    int n;
    cin>>n;
   
   for(int i = 1; i<=n ; i++)
   {
       for(int j = 1; j<=i ; j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
   
  return 0;
}
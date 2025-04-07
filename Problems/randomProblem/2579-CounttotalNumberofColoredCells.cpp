#include<iostream>
using namespace std;
long long coloredCells(int n) {
    if (n == 1) return 1;
    int t=1;
    long long cells=1;
    while(t<=n){
        cells=cells+(4*(t-1));
        t++;
    }
    return cells;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Total colored cells: " << coloredCells(n) << endl;
    return 0;
}
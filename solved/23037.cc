#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0; cin >> n;
    while(n){
        int m = n%10;
        sum += pow(m, 5);
        n /= 10;
    }
    cout << sum << endl;
}
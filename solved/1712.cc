#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (c <= b ? -1 : a / (c - b) + 1);
}
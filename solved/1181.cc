#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> arr;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if(find(arr.begin(), arr.end(), s) == arr.end()) arr.push_back(s);
    }
    sort(arr.begin(), arr.end(), [](string a, string b){
        if(a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    for(auto i : arr) cout << i << '\n';
}
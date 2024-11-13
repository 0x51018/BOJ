#include <bits/stdc++.h>
using namespace std;

int main(){
    string s[3]; int n;
    for(int i=0;i<3;i++) cin>>s[i];
    for(int i=0;i<3;i++){
        if(s[i] != "Fizz" && s[i] != "Buzz" && s[i] != "FizzBuzz") n = stoi(s[i]) + 3 - i;
    }
    if(n%3==0 && n%5==0) cout<<"FizzBuzz";
    else if(n%3==0) cout<<"Fizz";
    else if(n%5==0) cout<<"Buzz";
    else cout<<n<<"\n";
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, b, l, w; cin >> r >> b;
    cout << ((l = (r/2 + 2) + sqrt((r/2 + 2)*(r/2 + 2) - 4*(b + r))) / 2) << " " << ((w = (r/2 + 2) - sqrt((r/2 + 2)*(r/2 + 2) - 4*(b + r))) / 2) << endl;
}

/*
2*(l+w-2) = r
l*w - r = b

l+w = r/2 + 2
l*w = b + r

x^2 - (l+w)x + lw = 0

l = ((l+w) + sqrt((l+w)^2 - 4lw)) / 2, w = ((l+w) - sqrt((l+w)^2 - 4lw)) / 2
*/
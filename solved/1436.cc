#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    int cnt = 0, num = 666;
    while (1) {
        string s = to_string(num);
        if (s.find("666") != string::npos) cnt++;
        if (cnt == n) break;
        num++;
    }
    cout << num;
    return 0;
}

/*
10000번째 영화는 2666799번이다. 최대까지 다 돌아도 2초를 넘지 않는다.
오히려 하나하나 찾아서 벡터에 넣고 정렬하는 것보다 빠르다.
*/
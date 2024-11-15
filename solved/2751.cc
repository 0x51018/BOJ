#include <bits/stdc++.h>
using namespace std;

int n, arr[1000000], arrl[500000], arrr[500000];

// void merge(){

// }

// void merge_sort(int *arr, int left, int right){
//     if(left < right){
//         int mid = (left + right) / 2;
//         merge_sort(arr, left, mid);
//         merge_sort(arr, mid+1, right);
//         merge(arr, left, mid, right);
//     }
// }

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n; i++) cout << arr[i] << '\n';
}
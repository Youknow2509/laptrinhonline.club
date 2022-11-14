
#include <bits/stdc++.h>

using namespace std;

void solve(int index, int& rs, int k, vector<int>& arr){
    // dung de qui lap lai => phai tao diem dung cua chuong trinh
    if (arr.size() == 1){
        rs = arr[0];
        return ;
    }
    int del = (index + k)%arr.size();
    arr.erase(arr.begin()+del);
    // lap lai
    solve(del, rs, k, arr);
}

int main(){
    
    int n, k;
    cin >> n >> k;
    // tao day chua cac so tu 1 den n
    vector<int > arr;
    for ( int i = 1; i <= n; i++) arr.push_back(i);
    k = k - 1;
    int index = 0, rs = 0;
    solve(index, rs, k, arr );
    cout << rs;
    return 0;   
}
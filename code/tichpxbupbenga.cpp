
#include <bits/stdc++.h>

using namespace std;

void solve(int *a,int i,int j,int x, int k){
    if ( j < 0 ) return;
    if (a[j] == 0) solve(a, i, j-1,x, k);
    if(x - a[j] >= k){
        a[i] = 0;
        int y = a[j];
        a[j] = 0;
        solve(a, j, j-1, y, k);
    }
    else solve(a, i, j-1,x, k);
}

int main(){
    
    int n, k, s = 0, c = 0;

    cin >>  n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    //i   = 7 6 5 4 3 2 1 0
    //arr = 8 8 7 4 4 3 2 2  -> '0' 8 7 '0' 4 3 '0' 2 -> '0' '00' 7 '0' '00' 3 '0' '00'' -> ...
    // k = 2
    for (int i = n - 1; i >= 0; i--){
        if (a[i] == 0) continue;
        c++;
        s += a[i];
        solve(a, i,i-1,a[i],  k);
    }

    cout << c << " " << s;

    return 0;   
}
/* 
int main(){
 
    int n, x;
    cin >> n >> x;
    int a[c];
    for (int i=0; i<n; ++i) cin >> a[i];

    int d=0, sum=0, k=n;

    sort(a,a+n,greater<int>());

    for (int i=0; i<n; ++i) sum+=a[i]; 

    for (int i=0; i<n; ++i){
        if (a[d]-a[i]>=x) {
            sum-=a[i];
            d++;
            k--; 
        }
    }
    cout << k << " " << sum; 
    return 0;
  */
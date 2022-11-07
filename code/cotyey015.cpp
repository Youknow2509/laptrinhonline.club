
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    if (n > k) cout << (long long )(k*x + (n-k)*y);
    else  cout << (long long)(n*x);

    return 0;   
}
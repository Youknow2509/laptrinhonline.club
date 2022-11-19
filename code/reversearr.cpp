
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    reverse(a, a + k);
    reverse(a + k, a + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;   
}
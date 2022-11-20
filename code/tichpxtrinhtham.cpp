
// tle 
#include <bits/stdc++.h>

using namespace std;


int main(){
// 8 3
// 4 7 2 5 6 3 9 1
// 0 1 2 3 4 5 6 7
    int n, k;
    cin >> n >> k;
    int a[n];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i <= n - k; i++){
        int m = a[i];
        for (int j = i; j < i + k; j++){
            if (a[j] > m) m = a[j];
        }
        cout << m << " ";
    }

    return 0;
}
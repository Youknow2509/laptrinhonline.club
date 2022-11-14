
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for ( int i = 0; i < 3; i++){
        for ( int j = 0; j < n; j++){
            if (a[j] % 3 == i) cout << a[j] << " ";
        }
    }

    return 0;   
}
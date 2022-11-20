
#include <bits/stdc++.h>

using namespace std;


    //i   = 7 6 5 4 3 2 1 0
    //arr = 8 8 7 4 4 3 2 2  -> '0' 8 7 '0' 4 3 '0' 2 -> '0' '00' 7 '0' '00' 3 '0' '00'' -> ...
    // k = 2
int main(){
 
    int n, x, sum = 0, d = 0;
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++){   
        cin >> a[i];
        sum += a[i];
    }
    int k = n;

    sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++){
        if (a[d] - a[i] >= x) {
            sum -=  a[i];
            d++;
            k--; 
        }
    }
    cout << k << " " << sum; 
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, s = 0;;
    cin >> n;
    for ( int i = 1; i < n; i++){
        if (n % i == 0){
            s += i;
        }
    }
    if (n < 1) cout << "Poor Number";
    else if ( s > n ) cout << "Rich Number";
    else cout << "Poor Number";

    return 0;   
}

#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int a, n;
    cin >> a;
    while (true){
        cin >> n;
        if ( n > 0) break;
    }
    long long s = 0;
    for ( int i = a; i < n+a; i++){
        s += i;
    }
    cout << s;
    return 0;   
}
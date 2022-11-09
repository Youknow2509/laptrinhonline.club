
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b, max;
    cin >> a >> b;
    max = b > a ? b : a;
    a = a + b - max;
    for ( int i = a + 1; i < max; i++){
        if ( i % 5 == 2 || i % 5 == 3 ) cout << i << endl;
    }

    return 0;   
}
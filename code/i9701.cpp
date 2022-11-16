
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    double a[100], b[100], c[100];
    for ( int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];
    for ( int i = 0; i < n; i++) cout << setprecision(1) << fixed <<(a[i]*2 + b[i]*3 + c[i]*5)/10 << endl;

    

    return 0;   
}
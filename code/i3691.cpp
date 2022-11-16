
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double a, b;
    cin >> a >> b;
    // (b-a)/a*100;
    cout << setprecision(2) << fixed << (b - a)/a*100 << "%";
    return 0;   
}
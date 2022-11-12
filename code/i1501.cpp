
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double n;
    cin >> n;

    if ( n > 0 && n < 2000)cout << "Isento";
    else if (2000 < n && n < 3000) cout << "R$ " << setprecision(2) << fixed << 8*(n-2000)/100;
    else if (3000 < n && n < 4500) cout << "R$ " << setprecision(2) << fixed << 8*1000/100 + 18*(n-3000)/100;
    else if (n > 4500) cout << "R$ " << setprecision(2) << fixed << 8*1000/100 + 18*1500/100 + (n-4500)*28/100;
    

    return 0;   
}
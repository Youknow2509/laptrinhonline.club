

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double xa, xb, xc, xd, ya, yb, yc, yd;
    cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
    // abs(xa*yb - xb*ya + xb*yc - xc*yb + xc*yd - xd*yc + xd*ya - xa*yd)/2
    cout << setprecision(3) << fixed << abs(xa*yb - xb*ya + xb*yc - xc*yb + xc*yd - xd*yc + xd*ya - xa*yd)/2;
    return 0;   
}
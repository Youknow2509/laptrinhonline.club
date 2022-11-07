
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // ma sp  , so sp, gia sp.
    int msp_1, msp_2, sosp_1, sosp_2;
    double gia_sp_1, gia_sp_2;
    cin >> msp_1 >> sosp_1 >> gia_sp_1 >> msp_2 >> sosp_2 >> gia_sp_2;
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << sosp_1*gia_sp_1 + sosp_2*gia_sp_2;
    return 0;   
}
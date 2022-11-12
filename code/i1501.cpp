
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double tien, tong=0;
    cin >>tien;
    if(tien>=0.00 && tien<=2000.00){
        cout << "Isento";
        return 0;
    }
    else if(tien > 4500.00){
        tong += (tien-4500.00)*0.28 + 1499.99*0.18 + 999.99*0.08;
    }
    else if(tien > 3000.00)
        tong += (tien-3000.01)*0.18 + 999.99*0.08;
    else
        tong += (tien-2000.01)*0.08;
    cout << "R$ " << setprecision(2) << fixed << tong;

    return 0;   
}
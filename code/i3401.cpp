
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double a, b, c;
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a){
        cout << "Chu vi = " << setprecision(1) << fixed << a + b + c;
        return 0;
    }
    else {
        cout << "Dien tich = " << setprecision(1) << fixed << (a+b)*c/2;
    }

    return 0;   
}
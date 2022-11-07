
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double a, b, c, cv;
    cin >> a >> b >> c;
    if ( a < 0 || b < 0 || c < 0 ){
        cout << "khong la tam giac";
        return 0; 
    }
    // tong hai canh lon hon canh con lai
    if ( a + b <= c || a + c <= b || b + c <= a){
        cout << "khong la tam giac";
        return 0; 
    }
    cv = a + b + c;
    cout << setprecision(2) << fixed << cv << endl;
    cout << setprecision(2) << fixed << sqrt((cv/2)*(cv/2-a)*(cv/2-b)*(cv/2-c))<< endl;

}
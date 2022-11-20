#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;
    double s = 0;
    do{
        cin >> a;
    }while(a < 0 || a > 1000);

    if ( a <= 100) s = a;
    else if ( a <= 250) s = 100 + (a - 100)*1.2;
    else if ( a <= 500) s = 100 + 150*1.2 + (a - 250)*1.7;
    else  s = 100 + 150*1.2 + 250*1.7 + ( a - 500)*2.2;
    cout << setprecision(3) << fixed << s;
    return 0;
}
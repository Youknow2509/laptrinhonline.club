
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    double s = 0, i = 1;
    while ( i <= 100){
        s += 1/i;
        i++;
    }
    cout << setprecision(6) << fixed << s;
    return 0;   
}
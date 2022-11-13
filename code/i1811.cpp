
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a[12][12], line;
    char x;
    double s = 0;
    cin >> line >> x;
    for (int i = 0; i < 12; i++){
        for ( int j = 0; j < 12; j++){
            cin >> a[i][j];
            
        }
    }
    for (int i = 0; i < 12; i++){
        s += a[line][i];
    }

    if( x=='S') cout << setprecision(1) << fixed << s;
     
    else cout << setprecision(1) << fixed << s/12;
     
    return 0;   
}
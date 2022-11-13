
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int  j = 0;
    double s = 0, a[7];
    for ( int i = 0; i < 6; i ++){
        cin >> a[i];
        if (a[i] > 0) {
            s += a[i];
            j++;
        }
    }
    if (j == 0){
        cout << 0 << " Gia tri duong" << endl;
        cout << "0.0"; 
    }
    else{
        cout << j << " Gia tri duong" << endl;
        cout << setprecision(1) << fixed << s/j;                            
    }
    return 0;   
}
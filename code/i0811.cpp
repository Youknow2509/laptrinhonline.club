
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, mi = INT_MAX, j = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if ( mi > a[i] ) {
            mi = a[i];
            j = i;
        }
    }
    cout << "Menor valor: " << mi << endl; 

    cout << "Posicao: " << j << endl;

    return 0;   
}
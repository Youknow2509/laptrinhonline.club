
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, x = 0, y = 0;

    cin >> n;

    int a[n], c[n], l[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] % 2 == 0){
            c[x] = a[i];
            x++;
        }
        else{
            l[y] = a[i];
            y++;
        }
    }
    for (int i = 0; i < y; i++) cout << l[i] << " ";
    for ( int i = x- 1; i >= 0; i--) cout << c[i] << " ";
    return 0;   
}
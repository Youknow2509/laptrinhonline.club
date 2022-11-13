
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int p, n;
    cin >> p >> n;
    
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 
    for(int i = 0; i < n - 1; i++){
        if ( abs(a[i] - a[i+1]) > p  ){
            cout << "GAME OVER";
            return 0;
        }
    } 
    cout << "YOU WIN";
    return 0;   
}
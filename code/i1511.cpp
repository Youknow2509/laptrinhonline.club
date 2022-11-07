
#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int a[47], n;
    cin >> n;
    a[0]= 0;
    a[1] = 1;
    if ( n == 1){
        cout << 0;
        return 0;
    }
    if (n == 2){
        cout << 0 <<" "<<  1;
        return 0; 
    }
    for (int i = 2; i <= n; i++){
        a[i] = a[i-1] + a[i-2];
    }
    for (int i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
    return 0;   
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, c, d, a[100], j = 0, b[100];
    cin >> n >> c >> d;
    c = -c;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
        if ( a[i] <= d && a[i] >= c){ 
            b[j] = a[i];
            j++;
        }
    }
    cout << j << endl;
    for(int i = 0; i < j - 1; i ++){
        if (b[i] >= b[i+1]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES";

    return 0;   
}
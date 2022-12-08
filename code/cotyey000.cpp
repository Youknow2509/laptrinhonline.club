
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, s, rs = 0, x;
    cout << "Tese case = ";
    cin >> x;
    while (x--){
        cin >> n >> s;
        for (int x = 0; x <= n; x++){
            for (int y = 0; y <= n; y++){
                if (x + y > s) continue;
                if ( s - x - y <= n) rs++;
            }
        }
        cout << rs << endl;
    }
    return 0;
} 


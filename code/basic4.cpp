#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n, **a, **b;
    cin >> m >> n;
    a = new int* [m];
    b = new int* [m];
    for (int i = 0; i < m; i++){
        a[i] = new int [n];
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        b[i] = new int [n];
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }


    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
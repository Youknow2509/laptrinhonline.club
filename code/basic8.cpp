
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int m, n, p;
    cin >> m >> n >> p;
    int mtr1[m][n], mtr2[n][p], rs[m][p];
/* 
    3      2      4

 14     27
 64    103
 30    107

 13    104    -23     37
 43    -35    -19    -61

 => 
  1343       511      -835     -1129
  5261      3051     -3429     -3915
  4991      -625     -2723     -5417
 */
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> mtr1[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < p; j++){
            cin >> mtr2[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for ( int j = 0; j < p; j++){
            int s = 0;
            for (int k = 0; k < n; k++){
                s += mtr1[i][k] * mtr2[k][j];
            }
            rs[i][j] = s;
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            cout << rs[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a[100], j = 0, m = a[0];
    for (int i = 0; i < 100; i ++){
        cin >> a[i];
        if (a[i] >= m){
            m = a[i];
            j = i + 1;
        }
    }
    cout << m << endl << j;

    return 0;   
}
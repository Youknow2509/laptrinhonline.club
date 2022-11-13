
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, *a, *b;
    cin >> n;
    a = new int[n];
    b = new int[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
        cout << a[i] + b[i] << endl;
    }
    delete[] a;
    delete[] b;
    return 0;   
}
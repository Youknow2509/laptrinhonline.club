#include <bits/stdc++.h>

using namespace std;
int main(){
    long n, a[100];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
 
    double max = a[1] / n; 
    for(int i =1; i <= n; i++){
        if(a[i] / 1.0*(n - i + 1) > max){
            max = a[i] /(1.0*(n - i + 1));
        }
    }
    cout << setprecision(2) << fixed << max << endl;
 
    long A = 0, count = 0;
    for(int i = 1; i < n; i++){
        A += (a[i] + a[i + 1]);
        count++;  
    }
    if(count == 0){
        cout << a[1];
    } else {
        cout << A;
    }
    return 0;
}
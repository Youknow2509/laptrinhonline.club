
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i <= n; i++){
        cin >> a[i];
    }
    double x0, s1=0;

    cin >> x0;

    for(int i = 1; i<= n; i++){
        s1+=i*a[i]*pow(x0,i-1);
    }

    cout << setprecision(3) << fixed << s1;

    return 0;   
}
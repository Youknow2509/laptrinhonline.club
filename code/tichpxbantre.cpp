
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long n, k, i = 0, x;
    cin >> n  >> k;
    while (n--)
    {
        cin >> x;
        i += x/k;
    }
    
    cout << i*3*k;
    return 0;   
}
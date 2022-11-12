
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    // hang tram = n / 100 ; hang dv =  n % 10, chuc = (n/10)%10;
    if (n == (n/100)*(n/100)*(n/100)+(n % 10)*(n % 10)*(n % 10)+((n/10)%10)*((n/10)%10)*((n/10)%10))
        cout << "YES";
    else cout << "NO";
    return 0;   
}
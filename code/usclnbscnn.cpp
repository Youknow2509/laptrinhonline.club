
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b;
    do{
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << __gcd(a, b) << " " <<  a*b/__gcd(a, b) << endl;
    }
    while (a != 0 && b != 0);
    
    

    return 0;   
}
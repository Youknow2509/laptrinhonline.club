
#include <bits/stdc++.h>

using namespace std;

int main(){

    // bi overflow => fix ok
    int m, n;
    cin >> n >> m;
    long long s = 1;
    while(m--){
        s *= n;
        s %= 10;
    }
    cout << s;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    if ( a % b == 0 || b % a ==0 ) cout << "So nhieu";
    else cout << "Khong phai so nhieu";

    return 0;
}
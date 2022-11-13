
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, rs;
    cin >> n >> k;
    rs = k;
    for (int i = 1; i < n; i++) {
        rs *= (k - 1);
    }
    cout << rs;
    return 0;
}
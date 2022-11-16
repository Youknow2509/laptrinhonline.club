
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, c = 0;
    map <int , int> mp;
    map <int , int> :: iterator it;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int rs  = -INT_MAX;
    for ( it = mp.begin(); it != mp.end(); it++) {
        if ( it->second >= c ) c = it->second;
    }

    for ( it = mp.begin(); it != mp.end(); it++){
        if ( it->second == c ) rs = rs > it->first ? rs : it->first;
    }
    cout << rs;

    return 0;   
}
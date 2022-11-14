
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    map<int, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    map<int, int> :: iterator it;
    for (it = mp.begin(); it != mp.end(); it++){
        cout <<  it->first << " " << it->second << endl;
    }

    return 0;   
}
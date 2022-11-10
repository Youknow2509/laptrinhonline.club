
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string str;
    cin >> str;
    // str = "abaccaba";
    map <char, int> mp;
    for (int i = 0; i < str.length(); i++){
        mp[str[i]]++;
    }
    /* map <char, int> ::iterator i;
    for (i = mp.begin(); i != mp.end(); i++){
        cout << i->first << " " << i->second << endl;
    }
       */ 
    map<char, int> :: iterator it;
    for (it = mp.begin(); it != mp.end(); it ++){
        if ( it->second % 2 != 0){
            cout << "No" ;
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}
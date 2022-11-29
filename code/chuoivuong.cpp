
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    string str;
    cin >> n;
    while (n--)
    {
        cin >> str;
        int m = str.length();
        if (m % 2 != 0) cout << "NO";
        else{
            int j = m/2;
            int i = 0, c = 0;
            while(i < m/2){
                if (str[i] != str[j]){
                    c++;
                }
                i++;
                j++;
            }
            if (c == 0) cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
    
    return 0;
}
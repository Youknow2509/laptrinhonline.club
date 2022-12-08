
#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin >> str;
    if (str[8] == 'A'){
        if (str[0] == '1' && str[1] == '2') {
            str[0] = '0';
            str[1] = '0';
            for (int i = 0; i < 8; i++) cout << str[i];
        }
        else{
            for (int i = 0; i < 8; i++) cout << str[i];
        }
    }
    else{
        if (str[0] == '1' && str[1] == '2') {
            for (int i = 0; i < 8; i++) cout << str[i];
        }
        else{
            int x = (str[0] - '0')*10 + (str[1] - '0') + 12;
            cout << x;
            for (int i = 2; i < 8; i++) cout << str[i]; 
        }
    }
    return 0;
}
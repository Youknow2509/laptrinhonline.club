
#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;
    while(true){
        int s = 0;
        cin >> a;
        if ( a == 0) return 0;
        else{
            for (int i = a; i <= a + 9; i++){
                if (i % 2 == 0) s += i;
            }
            cout << s << endl;
        }
    }

    return 0;
}
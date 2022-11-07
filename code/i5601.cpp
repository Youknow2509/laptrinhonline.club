
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 5, i = 0;
    while(a--){
        int b;
        cin >> b;
        if(b % 2 == 0) i++;
    }
    cout << i << " Gia tri";

    return 0;   
}
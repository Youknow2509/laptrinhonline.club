
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long a;
    cin >>a;
    if(a < 50){
        cout << a * 100;
    } else if(a >= 50 && a < 1000){
        cout << a * 500;
    } else if(a >= 1000 && a < 10000){
        cout << a * 1000;
    } else {
        cout << a * 1200;
    }

    return 0;   
}
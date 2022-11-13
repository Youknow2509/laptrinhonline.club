
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, count; 
    cin >> n; 
    for(long long i = 2; i <= n; i++){
        count = 0; 
        while( n%i == 0 ){
            count++;
            n /= i;
        }
        if( count>=1) cout << i << " " << count << endl; 
    }

    return 0;   
}
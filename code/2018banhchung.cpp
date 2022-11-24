
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, s, A[5]; 
    cin >> n;
    A[1] = A[2] = A[3] = A[4] = 0;
    for(long i = 1; i <= n; i++) 
    {
        cin >> s;
        A[s]++;
    }
    s = A[4] + A[3] + A[2]/2;
    if ( A[1] > A[3]) A[1] = A[1] - A[3];
    else A[1] = 0;
    s += A[1]/4;
    A[1] = A[1]%4;
    A[2] = A[2]%2*2 + A[1];
    if( A[2] > 4) s += 2;
    else if( A[2] > 0) s++;
    cout << s;  

    return 0;   
}

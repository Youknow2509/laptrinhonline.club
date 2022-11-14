
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b ,h, day = 0, h_n = 0;
    cin >> a >> b >> h;
    
    // h 
    while (h_n < h)
    {
        /* code */
        day++;
        h_n += a;
        if (h_n < h) h_n -= b;
    }
    cout << day;

    return 0;   
}
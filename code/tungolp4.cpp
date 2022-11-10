
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x, s = 1, i = 1, hp = 0;
    cin >> x;
    hp = x;
    while(s < x && hp > s + i ){
        i++;
        s = s + i;
        hp -= s;
    }
    cout << i;

    return 0;   
}

/*  Ai = A(i-1) + i, với i là số thứ tự của cú đấm, và Ai là lượng sát thương gây ra sau cú đấm đó. Với i=1 thì Ai = 1.

    A2 = 1 + 2 = 3

    A3 = 3 + 3 = 6 */
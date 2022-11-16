
#include <bits/stdc++.h>

using namespace std;

bool check(int a, int b, int c){

    return (a + b > c && b + c > a && c + a > b ) ? true : false;
}

int main(){
    
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if(A+B>C&&A+C>B&&B+C>A || A+B>D&&A+D>B&&B+D>A || D+B>C&&D+C>B&&B+C>D || A+D>C&&A+C>D&&D+C>A) cout << "S";
    else cout << "N";

    return 0;   
}
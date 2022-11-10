    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        int A,B,C;
        cin >> A >> B >> C;
        if(A==B&&B!=C||B==C&&C!=A||C==A&&A!=B) cout << 2;
        else if(A==B&&B==C) cout << 1;
        else cout<< 3;
        return 0;
    }
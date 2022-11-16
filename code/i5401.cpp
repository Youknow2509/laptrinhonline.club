
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a[3];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a+3, greater<double>());
    
    if( a[0] >= (a[1] + a[2])){
        cout << "KHONG PHAI TAM GIAC" << endl;
        return 0;
    }
    if( a[0]*a[0] == a[1]*a[1] + a[2]*a[2]) cout << "TAM GIAC VUONG" << endl;
    if( a[0]*a[0] > a[1]*a[1] + a[2]*a[2]) cout << "TAM GIAC TU" << endl;
    if( a[0]*a[0] < a[1]*a[1] + a[2]*a[2]) cout << "TAM GIAC NHON" << endl;
    if( a[0] == a[1] && a[1] == a[2]) cout<<"TAM GIAC DEU"<<endl;
    if(( a[0] == a[1] &&a [1] != a[2])||( a[0] == a[2] && a[2] != a[1])||( a[1] == a[2] && a[0] != a[1])) cout << "TAM GIAC CAN" << endl;

    return 0;
}
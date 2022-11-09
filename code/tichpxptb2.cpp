#include <bits/stdc++.h>

using namespace std; 
int main ()
{
    double a,b,c,delta;
    cin >> a >> b >> c;
    if (a==0){
        if (b==0){
            if (c==0) cout << "vo so nghiem";
            else cout << "vo nghiem";
        }
        else {
            cout << setprecision(3) << fixed << -b/c ;
        }
    }
    else {
        delta=b*b-4*a*c;
        if(delta<0) cout <<"vo nghiem";
        else{ 
            if(delta==0) {
                cout << setprecision(3) << fixed << -b/(2*a);
            }
            else (delta>0){
                cout << setprecision(3) << fixed <<(-b+sqrt(delta))/(2*a) << endl;
                cout << setprecision(3) << fixed <<(-b+sqrt(delta))/(2*a);
            }
        }
    }
}
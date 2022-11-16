/* 
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    switch (n)
    {
    case 61:
        cout << "Brasilia";
        break;
    case 71:
        cout << "Salvador";
        break;
    case 11:
        cout << "Sao Paulo";
        break;
    case 21:
        cout << "Rio de Janeiro";
        break;
    case 32:
        cout << "Juiz de Fora";
        break;
    case 19:
        cout << "Campinas";
        break;
    case 27:
        cout << "Vitoria";
        break;
    case 31:
        cout << "Belo Horizonte";
        break;
    default:
        cout << "DDD nao cadastrado";
        break;
    }

    return 0;   
}


 */

// code with map 

#include <bits/stdc++.h>

using namespace std;

int main(){

    map <int, string> mp;
    map <int, string> :: iterator it;
    int a ;
    
    mp.insert(pair<int, string>(61, "Brasilia"));
    mp.insert(pair<int, string>(71, "Salvador"));
    mp.insert(pair<int, string>(11, "Sao Paulo"));
    mp.insert(pair<int, string>(21, "Rio de Janeiro"));
    mp.insert(pair<int, string>(32, "Juiz de Fora"));
    mp.insert(pair<int, string>(19, "Campinas"));
    mp.insert(pair<int, string>(27, "Vitoria"));
    mp.insert(pair<int, string>(31, "Belo Horizonte"));
    cin >> a;
    it = mp.find(a);
    if (it == mp.end()) cout << "DDD nao cadastrado";
    else cout << it->second;
    return 0;
}


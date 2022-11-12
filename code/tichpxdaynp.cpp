
#include <bits/stdc++.h>

using namespace std;

int N;
 
string a[100009];
 
int main(){
    cin >> N;
    int n = 2;
    a[0] = "0";
    a[1] = "1";
    int k = 0;
    while (a[k].length() < N){
        a[n++] = a[k] + "0";
        a[n++] = a[k] + "1";
        k++;
    }
    for (int i = k; i < n; i++) cout << a[i] << endl;
    return 0;
}

// very ez nếu đã học Queue
// pp sinh 
/* Ta thấy rằng nếu lấy lần lượt các chuỗi nhị phân độ dài N - 1, sau đó thêm ký tự 0 hoặc 1 vào cuối chuỗi đó, ta sẽ được 2 chuỗi nhị phân độ dài N.
Ví dụ như các chuỗi nhị phân độ dài 2 có các chuỗi là "00", "01", "10", "11".
Với chuỗi "00" khi ta thêm vào cuối nó ký tự '0' hoặc '1' ta có chuỗi "000" và "001".
Tương tự với chuỗi "01" ta sẽ có chuỗi "010" và "011".
Tương tự với chuỗi "10" ta sẽ có chuỗi "100" và "101".
Tương tự với chuỗi "11" ta sẽ có chuỗi "110" và "111".
Như vậy chỉ cần 2 ký tự "0" và "1" ta có thể sinh ra các chuỗi nhị phân độ dài N. */
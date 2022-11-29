
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, s, t, st = 0, s_ = 0, t_ = 0;
    // cửa hàng bán n đồ chơi trong đó có: 
    // s sticker ---
    // t món đồ chơi --- 
    cin >> n >> s >> t;

    // quả  trứng có 3 th:
    // 1. stiker 
    // 2. đồ chơi
    // 3. sticker + đồ chơi
    // yêu cầu có: ít nhất 1 sticker và ít nhất 1 món đồ chơi
    // Lưu ý rằng: Ben không mở quả trứng trong quá trình mua( Ben chỉ được mua với số lượng trứng đã định trước).
    // tính số trứng tối thiểu
    // 5  2  4  ==>  4

    st = s + t - n;
    s_ = s - st;
    t_ = t - st;
    cout << max(s_, t_) + 1;
    return 0;
}
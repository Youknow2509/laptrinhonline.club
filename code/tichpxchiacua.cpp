
#include <bits/stdc++.h>

using namespace std;

int min_diff = INT_MAX;

void backtrack(int index, int sum1, int sum2, const vector<int> assets) {
    if (index == assets.size()) {
        int diff = abs(sum1 - sum2);
        min_diff = min(min_diff, diff);
        return;
    }

    backtrack(index + 1, sum1 + assets[index], sum2, assets);

    backtrack(index + 1, sum1, sum2 + assets[index], assets);
}

int main() {
    int n;
    cin >> n;

    vector<int> assets(n);
    for (int i = 0; i < n; i++) {
        cin >> assets[i];
    }

    backtrack(0, 0, 0, assets);

    cout << min_diff << endl;

    return 0;
}
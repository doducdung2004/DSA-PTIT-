#include <bits/stdc++.h>
using namespace std;

int n, k, ans = 0;
vector<int> a, b, c;

void solve() {
    vector<int> tmp = c;
    sort(tmp.begin(), tmp.end());
    if (tmp == c) ans++;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n - k + i; ++j) {
        b[i] = j;
        c[i] = a[b[i]];
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n + 1); 
    b.resize(k + 1, 0); 
    c.resize(k + 1, 0); 
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    Try(1);
    cout << ans;
}

int main() {

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

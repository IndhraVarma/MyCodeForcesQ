#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnt++;
        } else {
            if (cnt == 1 || cnt == 2) {
                cout << "No\n";
                return;
            }
            cnt = 0;
        }
    }
    if (cnt == 1 || cnt == 2) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    // Precompute powers of 10 up to 10^18
    vector<unsigned long long> p10(19, 1);
    for (int i = 1; i <= 18; ++i) p10[i] = p10[i-1] * 10ULL;

    while (t--) {
        unsigned long long n;
        cin >> n;
        vector<unsigned long long> ans;

        for (int k = 1; k <= 18; ++k) {
            unsigned long long d = p10[k] + 1ULL;
            if (n >= d && n % d == 0ULL) {
                ans.push_back(n / d);
            }
        }

        sort(ans.begin(), ans.end());
        if (ans.empty()) {
            cout << 0 << '\n';
        } else {
            cout << ans.size()<<endl;
            for (auto x : ans) cout << ' ' << x;
            cout << '\n';
        }
    }
    return 0;
}

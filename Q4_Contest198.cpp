#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> l;
    map<int, int> u, k;
   
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            k[a[i]]++;
            u[a[i]] += 2;
        } else {
            u[a[i]]++;
            u[b[i]]++;
        }
    }
    
    int c1 = 0;
    int c2 = n + 1;
    
    while(u.count(c1)) {
        c1++;
    }
    
    for(int x = 0; x < c1; x++) {
        if(k.find(x) == k.end()) {
            l.push_back(x);
        }
    }
    
    if(l.size() >= 2) {
        c2 = l[1];
    }
    
    cout << min(c1, c2) << endl;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}
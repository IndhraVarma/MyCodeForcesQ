#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define maxi(v) *max_element(all(v))
#define mini(v) *min_element(all(v))
#define f(i,n) for (ll i = 0; i < n; i++)
const ll MOD = 1e9+7;

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    int distance;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        int currDistance=abs(a-x)+abs(a-y);
        distance=min(currDistance,abs(a-x)+abs(a-y));
    }
    cout<<distance<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
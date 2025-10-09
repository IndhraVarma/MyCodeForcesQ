#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define maxi(v) *max_element(all(v))
#define mini(v) *min_element(all(v))
#define f(i,n) for (ll i = 0; i < n; i++)
const ll MOD = 1e9+7;

void solve() {
    ll n;
    cin>>n;
    ll evenSum=0;
    vector<int>odd;
    f(i,n){
        ll x;
        cin>>x;
        if(x%2==0)evenSum+=x;
        else odd.push_back(x);
    }
    if(odd.size()==0) cout<<0<<endl;
    else{
        sort(odd.begin(),odd.end());
        ll ans=evenSum+odd[odd.size()-1];
        if(odd.size()!=1){
            ll i=0, j=odd.size()-2;
            while(j>i){
                ans+=odd[j];
                j--;i++;
            }
        }
        cout<<ans<<endl;
    }
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
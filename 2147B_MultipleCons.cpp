#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define maxi(v) *max_element(all(v))
#define mini(v) *min_element(all(v))
#define f(i,n) for (ll i = 0; i < n; i++)
const ll MOD = 1e9+7;

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n*2);
    for(int i=0; i<2*n; i++){
        arr[i]=(i%n)+1;
    }
    int k=n-1;
    reverse(arr.begin(),arr.begin()+k);
    for(int i=0; i<2*n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
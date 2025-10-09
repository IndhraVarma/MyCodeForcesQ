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
    string s;
    cin>>s;
    int cnt=0;
    int i=0,j=n-1;
    int st=0,end=n-1;
    for(int i=0; i<n; i++){
        if(s[i]==1){
            st=i;
            break;
        }
    }
    for(int j=n-1; j>=0; j--){
        if(s[j]==1){
            end=j;
            break;
        }
    }
    for(int i=st; i<end; i++){
        if(s[i]==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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
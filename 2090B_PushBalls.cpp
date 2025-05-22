#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO                                                                 \
    ios::sync_with_stdio(false);                                               \
    cin.tie(NULL);                                                             \
    cout.tie(NULL);                                                            \
    cout.precision(numeric_limits<double>::max_digits10);

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n; i++){
        cin>>a[i];
    } //n
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]== '0'){
                continue;
            }
            bool f=1;
            for(int k=0; k<i; k++){
                if(a[k][j]=='0'){
                    f=0;
                    break;
                }//n
            }
                if(f) continue;

                f=1;
                for(int k=0; k<j; k++){
                    if(a[i][k]=='0'){
                        f=0;
                        break;
                    }
                } //m
                if(f==0){
                    cout<<"NO\n";
                    return;
                }
        }
        
    }
    cout<<"YES\n";
}
int32_t main() {
    fastIO;
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
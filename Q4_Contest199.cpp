#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0; i<n; i++){
        a[i]=n-i-1;
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
        rotate(a.begin(),a.end()-1,a.end());
    }
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}
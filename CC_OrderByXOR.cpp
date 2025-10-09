#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    
    int x=0,ans=0;
    bool possible=true;

    for(int i=29; i>=0; i--){
        int x=(1<<i)^a;
        int y=(1<<i)^b;
        int z=(1<<i)^c;

        if(x<y && y<z){
            a=x;
            b=y;
            c=z;
            ans^=(1<<i);
            break;
        }else if(x<min(y,z) || max(x,y)<z){
            a=x;
            b=y;
            c=z;
            ans^=(1<<i);
        }
    }
    if(a<b && b<c) cout<<ans<<endl;
    else cout<<-1<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
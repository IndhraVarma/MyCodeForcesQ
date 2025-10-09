#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int>arr(4);
    for(int i=0; i<n; i++){
        arr[i%4]++;
    }
    if(arr[0]==arr[3] && arr[1]==arr[2]){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Alice"<<endl;
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            if(i%2==0){
                arr[i]=-1;
            }else{
                arr[i]=3;
            }
        }
        if(n%2==0){
            arr[n-1]=2;
        }
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}

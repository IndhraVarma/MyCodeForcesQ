#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>prefix(n+1,0);
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        prefix[i+1]=prefix[i]+arr[i];
    }
    int maxi=0;
    int cnt=prefix[n];

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int x=prefix[j+1]-prefix[i];
            int y=(j-i+1)-x;
            int z=cnt-x+y;
            maxi=max(maxi,z);
        }
    }
    cout<<maxi<<endl;
    return 0;
}
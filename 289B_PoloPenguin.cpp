#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,d;
    cin>>n>>m>>d;
    vector<int>arr(n*m);

    for(int i=0; i<n*m; i++){
        cin>>arr[i];
    }

    int rem=arr[0]%d;
    for(int i=1; i<n*m; i++){
        if(arr[i]%d!=rem){
            cout<<-1<<endl;
            return 0; 
        }
    }
    for(int i=0; i<m*n; i++){
        arr[i]/=d;
    }
    sort(arr.begin(),arr.end());
    int median=arr[arr.size()/2];

    long long moves=0;
    for(int i=0; i<n*m; i++){
        moves+=abs(arr[i]-median);
    }
    cout<<moves<<endl;
    return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=k+1; i<=n; i++){
        if(arr[i]!=arr[k]){
            cout<<-1<<endl;
            return 0;
        }
    }
    int ans=0;
    for(int i=k-1; i>=1; i--){
        if(arr[i]!=arr[k]){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;   
}
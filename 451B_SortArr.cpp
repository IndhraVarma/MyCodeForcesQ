#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>arr2(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2.begin(),arr2.end());

    int l=0,r=n-1;

    while(l<n && arr[l]==arr2[l]) l++;
    while(r>=0 && arr[r]==arr2[r])r--;

    if(l>=r){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }

    reverse(arr.begin()+l,arr.begin()+r+1);

    if(arr==arr2){
        cout<<"yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }else{
        cout<<"no\n";
    }
    return 0;
}

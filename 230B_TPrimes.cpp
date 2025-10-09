#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if(n<2) return false;
    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool TPrime(long long n){
    long long root=sqrt(n);
    return (root*root==n && isPrime(root));
}

int main() {
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(TPrime(arr[i])){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
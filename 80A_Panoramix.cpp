#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>
 
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    int next=n+1;
    while(true){
        if(isPrime(next)){
            return next;
        }else{
            next++;
        }
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    if(m==nextPrime(n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
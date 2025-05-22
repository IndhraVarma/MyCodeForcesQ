#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n,x;
    cin>>n>>x;
    vector<long long>vals(n);
    for(int i=0; i<n; i++){
        cin>>vals[i];
    }
    long long sum=0;
    for(auto values: vals){
        sum+=values;
    }
    if(sum == n*x){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}
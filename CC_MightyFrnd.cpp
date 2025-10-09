#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>tomu;
    vector<int>motu;
    for(int i=0; i<n; i++){
        if(i%2==0){
            motu.push_back(arr[i]);
        }else{
            tomu.push_back(arr[i]);
        }
    }

    sort(motu.begin(),motu.end(),greater<int>());
    sort(tomu.begin(),tomu.end());

    for(int i=0; i<min((int)tomu.size(),(int)motu.size()) && k>0; i++){
        if(tomu[i]<motu[i]){
            swap(tomu[i],motu[i]);
            k--;
        }
    }
    long long motuScore = accumulate(motu.begin(), motu.end(), 0LL);
    long long tomuScore = accumulate(tomu.begin(), tomu.end(), 0LL);

    
    if(tomuScore>motuScore){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
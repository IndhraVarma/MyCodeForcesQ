#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void solve() {
    int n;
    cin>>n;
    vector<int>angle(n);
    for(int i=0; i<n; i++){
        cin>>angle[i];
    }
    vector<int>differences;
    for(int i=0; i<n-1; i++){
        differences.push_back(angle[i+1]-angle[i]);
    }
    differences.push_back(360-angle[n-1]+angle[0]);

    int common_div=differences[0];

    for(int i=0; i<n; i++){
        common_div=gcd(common_div,differences[i]);
    }

    int num_slices= 360/common_div;

    int cuts= num_slices-n;

    if(cuts<0) cuts=0;

    cout<<cuts<<endl;
}
int main() {
    int tt;
    cin>>tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
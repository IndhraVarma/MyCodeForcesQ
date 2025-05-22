#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c0= count(s.begin(),s.end(),'0');
    int c1=n-c0;

    cout<<n*c1+c0-c1<<endl;

}
int main() {
    long long tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
}
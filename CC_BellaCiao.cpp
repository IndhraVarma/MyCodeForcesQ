#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long D,d,P,Q;
    cin>>D>>d>>P>>Q;

    long long num_intervals=D/d;
    long long remaining_days=D%d;

    long long money= num_intervals*d*P;
    money+=Q*d*(num_intervals*(num_intervals-1))/2;

    money+= remaining_days*(P+num_intervals*Q);
    cout<<money<<endl;
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
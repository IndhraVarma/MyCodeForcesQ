#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> arr2(n);
    for (int i = 0; i < n; i++) arr2[i] = i + 1;

    vector<int> rev(n);
    for (int i = 0; i < n; i++) rev[i] = arr2[n - 1 - i];

    vector<int> map(n + 1);
    for (int i = 0; i < n; i++) {
        map[arr2[i]-1] = rev[i];
    }

    for (int i = 0; i < n; i++) {
        cout << map[arr[i]-1] << " ";
    }
    cout << "\n";
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
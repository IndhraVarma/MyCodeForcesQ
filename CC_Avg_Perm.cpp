#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<queue>
#include<climits>

using namespace std;

void solve() {
    int n;
    cin>>n;
    if(n==3){
        cout<<"321";
        return;
    }
    for(int i=n-1; i>0; i--){
        cout<<i;
    }
    cout<<n<<endl;
    
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
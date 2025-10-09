#include <bits/stdc++.h>

using namespace std;
long long calculateAltSum(const vector<int>&arr){
    long long sum=0;
    for(int i=0; i<arr.size(); i++){
        if(i%2==0){
            sum+=abs(arr[i]);
        }else{
            sum-=abs(arr[i]);
        }
    }
    return sum;
}
void solve() {
    
}
int main() {
    int tt;
    cin >> tt; // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int n,a,b;
    cin>>n>>a>>b;
    //a min in front//b max behind
    int min_pos=max(a+1,n-b);
    int ans=n-min_pos+1;
    cout<<ans;
    return 0;
}


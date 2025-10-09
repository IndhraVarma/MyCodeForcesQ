#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<set>

using namespace std;

int main() {
    int n;
    cin>>n;
    set<int>s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    cout<<s.size();
    return 0;
}

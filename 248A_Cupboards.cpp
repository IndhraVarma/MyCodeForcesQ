#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int left_open=0, right_open=0;
     for(int i=0; i<n;i++){
        int l,r;
        cin>>l>>r;
        left_open+=l;
        right_open+=r;
     }
     int left_moves=min(left_open, n-left_open);
     int right_moves= min(right_open, n- right_open);
     cout<<left_moves+right_moves;
    return 0;
}
#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>h(n);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    int min_diff = abs(h[0] - h[n-1]);
    int idx1 = n, idx2 = 1;

    for(int i=0; i<n-1; i++){
        int diff= abs(h[i]-h[i+1]);
        if(diff<min_diff){
            min_diff=diff;
            idx1= i+1;
            idx2= i+2;
        }
    }
    cout<<idx1<<" "<<idx2<<endl;
    return 0;   
}
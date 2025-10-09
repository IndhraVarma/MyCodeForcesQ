#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<unordered_map>

using namespace std;

int main() {
    int n;
    cin>>n;
    int maxFreq=-1;
    unordered_map<int,int>freq;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        freq[x]++;
        maxFreq=max(freq[x],maxFreq);
    }
    if(maxFreq>(n+1)/2){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}
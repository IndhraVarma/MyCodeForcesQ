#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<climits>

using namespace std;

int main() {
    long long n;
    cin>>n;
    int index=-1;
    int mini=INT_MAX;
    int count=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a<mini){
            mini=a;
            index=i;
            count=1;
        }else if(a==mini){
            count++;
        }
    }
    if(count>1){
        cout<<"Still Rozdil";
    }else{
        cout<<index+1;
    }
    return 0;
}
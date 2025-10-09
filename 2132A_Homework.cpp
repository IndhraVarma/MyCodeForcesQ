#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        string a,b,c;
        cin>>a>>m>>b>>c;

        for(int i=0; i<m; i++){
            if(c[i]=='D'){
                a.push_back(b[i]);
            }else{
                a.insert(a.begin(),b[i]);
            }
        }
        cout<<a<<endl;
    }
}
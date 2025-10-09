#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>
 
using namespace std;
 
int main(){
    int n,f,total=0,ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>f;
        total+=f;
    }
    for(int i=1; i<=5; i++){
        if((total+i)%(n+1)!=1){
            ans+=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
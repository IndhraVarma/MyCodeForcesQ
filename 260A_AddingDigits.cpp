#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,n;
    cin>>a>>b>>n;
    
    bool found=false;
    int digit;

    for(int i=0; i<=9; i++){
        if((a*10+i)%b==0){
            digit=i;
            found=true;
            break;
        }
    }

    if(!found){
        cout<<-1<<endl;
    }else{
        cout<<a<<digit;
        for(int i=1;i<n; i++) cout<<0;
        cout<<endl;
    }
    return 0;
}
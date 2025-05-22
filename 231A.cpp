#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    //p,v,t
    int n;
    cin>>n;
    int solved=0;
    
    for(int i=0;i<n;i++){
        int Petya,Vesya,Tonya;
        cin>>Petya>>Vesya>>Tonya;
            if(Petya+Vesya+Tonya >= 2){
            solved++;
            }
    }
    
    cout<<solved;

}
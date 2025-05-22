#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    vector<string> str(n);
    

    for(int i=0;i<n;i++){
        getline(cin, str[i]);
    }
    for(int i=0; i<n;i++){
                if(str[i].length()>10){
                    int n= str[i].size();
                    cout<<str[i][0]<<n-2<<str[i][n-1]<<endl;
                }else{
                    cout<<str[i]<<endl;
                }
            }
    
}
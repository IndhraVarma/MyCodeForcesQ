#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    n++;
    
    while(n>0){
        int a=n%10;
        int b=(n/10)%10;
        int c= (n/100)%10;
        int d= (n/1000)%10;
        if(a!= b && b!= c && c!=a && a!=d&& d!=b && d!=c){
            cout<<n;
            break;
        }
        n++;
    }
    return 0;
}
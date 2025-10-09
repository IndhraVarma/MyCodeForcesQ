#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    for(int i=0; i<4;i++){
        for(int j=1; j<4; j++){
            if(j/i == ((i-m)/(j-n))){
                count++;
            }
        }
    }
    cout<<count;
    return 0;   
}
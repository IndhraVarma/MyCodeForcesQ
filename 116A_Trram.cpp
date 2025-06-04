#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int curr_pass=0;
    int max_capacity=0;
    for(int i=0; i<n; i++){
        int exit,enter;
        cin>>exit>>enter;
        curr_pass-=exit;
        curr_pass+=enter;
        max_capacity=max(max_capacity,curr_pass);
    }
    cout<<max_capacity;
    return 0;
}
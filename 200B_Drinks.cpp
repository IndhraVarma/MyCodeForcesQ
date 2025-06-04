#include<iostream>
#include<string>
#include<vector>
#include <iomanip>
#include <climits>

using namespace std;

int toFraction(float n){
    return n/100;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    float sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    float avg= sum/n;
    cout << fixed << setprecision(6) << avg << endl;

    return 0;
}

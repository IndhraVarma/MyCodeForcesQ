#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <climits>

using namespace std;

int main(){
    int ab,bc,ca;
    cin>>ab>>bc>>ca;

    double a=sqrt((double)ab*ca/bc);
    double b=sqrt((double)ab*bc/ca);
    double c=sqrt((double)bc*ca/ab);

    int total=4*(a+b+c);
    cout<<total<<endl;
    return 0;   
}
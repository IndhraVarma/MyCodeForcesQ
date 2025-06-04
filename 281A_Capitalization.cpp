#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>

using namespace std;

int main() {
    string x;
    cin>>x;
    x[0]=tolower(x[0]);
    int y =int(x[0]);
    y-=32;
    x[0]= char(y);
    cout<<x;
    return 0;
}

#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cctype>

using namespace std;

bool isLucky(int n){
    if(n==0) return false;
    
    while(n>0){
        int digit= n%10;
        if(digit!=4 && digit!= 7){
            return false;
        }
        n/=10;
    }
    return true;
}
int main() {
    string n;
    cin >> n;

    int lucky_digits = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            lucky_digits++;
        }
    }

    if (isLucky(lucky_digits)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
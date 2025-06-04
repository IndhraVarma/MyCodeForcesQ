#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<cmath>

using namespace std;

int main() {
    int rows=5;
    int columns=5;
    int matrix[rows][columns];
    int r,c;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1) r=i, c=j;
        }
    }
    cout<<abs(2-r)+abs(2-c);
}

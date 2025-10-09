#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int dx=ex-sx;
    int dy=ey-sy;
    for(int i=0; i<t; i++){
        char dir=s[i];

        if(dx>0 && dir=='E')dx--;
        else if(dx<0 &&dir=='W')dx++;
        if(dy>0 && dir=='N')dy--;
        else if(dy<0 && dir=='S')dy++;

        if(dx==0 &&dy==0){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
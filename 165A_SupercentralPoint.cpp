#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>points(n);

    for(int i=0; i<n; i++){
        cin>>points[i].first>>points[i].second;
    }
    int count=0;
    
    for(int i=0; i<n; i++){
        bool left=false,right=false, up=false, down=false;

        for(int j=0; j<n; j++){
            if(points[i].first == points[j].first){
                if(points[j].second> points[i].second) up=true;
                if(points[j].second <points[i].second) down=true;
            }
            if(points[i].second == points[j].second){
                if(points[j].first> points[i].first) right=true;
                if(points[j].first< points[i].first) left= true;
            }
        }
        if(left && right &&up && down){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
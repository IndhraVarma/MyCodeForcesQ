#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<unordered_map>
#include<climits>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int>correct(n);
    vector<int>wrong(m);
    for(int i=0; i<n; i++){
        cin>>correct[i];
    }
    for(int i=0; i<m; i++){
        cin>>wrong[i];
    }
    int minOfCorrect=INT_MAX;
    int minOfWrong=INT_MAX;
    int maxOfCorrect=INT_MIN;
    for(int i=0; i<n; i++){
        if(minOfCorrect>correct[i]){
            minOfCorrect=correct[i];
        }
    }
    for(int i=0; i<m; i++){
        if(minOfWrong>wrong[i]){
            minOfWrong=wrong[i];
        }
    }
    for(int i=0; i<n; i++){
        if(maxOfCorrect<correct[i]){
            maxOfCorrect=correct[i];
        }
    }
    int ans;
    for(int i=0; i<1000; i++){
        if(i>=maxOfCorrect && i<minOfWrong && i>=(2*minOfCorrect)){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
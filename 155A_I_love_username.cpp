#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>scores(n);
    int amazing=0;
    for(int i=0; i<n; i++){
        cin>>scores[i];
    }
    int max_score=scores[0],min_score=scores[0];
    for(int i=1; i<n; i++){
        if(scores[i]>max_score){
            max_score=scores[i];
            amazing++;
        }else if(scores[i]<min_score){
            min_score= scores[i];
            amazing++;
        }
    }
    cout<<amazing;
    return 0;
}
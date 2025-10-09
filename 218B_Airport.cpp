#include <iostream>
#include <vector>
#include<queue>
using namespace std;

int main() {
    int n, m;
    cin >> n>>m;
    vector<int>seats(m);
    for(int i=0; i<m; i++){
        cin>>seats[i];
    }
    priority_queue<int>maxHeap;
    for(int i=0; i<m; i++){
        maxHeap.push(seats[i]);
    }
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0; i<m; i++){
        minHeap.push(seats[i]);
    }
    int maxProfit=0, minProfit=0;

    //Maximinze
    for(int i=0; i<n; i++){
        int top=maxHeap.top();
        maxHeap.pop();
        maxProfit+=top;
        if(top-1>0){
            maxHeap.push(top-1);
        }
    }
    //Minimize
    for(int i=0; i<n; i++){
        int top=minHeap.top();
        minHeap.pop();
        minProfit+=top;
        if(top-1>0){
            minHeap.push(top-1);
        }
    }
    cout<<maxProfit<<" "<<minProfit<<endl;
    return 0;
}

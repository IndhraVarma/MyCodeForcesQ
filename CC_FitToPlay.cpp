#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    scanf("%d", &n);
    vector<int>goals(n);
    for(int i=0; i<n; i++){
        scanf("%d",&goals[i]);
    }
    int ans=-1;
    int min_so_far=goals[0];

    for(int i=1; i<n; i++){
        if(goals[i]>min_so_far){
            ans=max(goals[i]-min_so_far,ans);
        }
        min_so_far=min(min_so_far,goals[i]);
    }
    if(ans==-1){
        printf("UNFIT\n");
    }else{
        printf("%d\n",ans);
    }
}
int main() {
    int tt;
    scanf("%d",&tt); // Number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
		cin >> n;
		int num1 = -1;
		int flag = 1;
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			if (num != -1 && num1 == -1&&num!=0) {
				num1 = num;
			}
			if (num1 != num&&num != -1) {
				flag = 0;
			}
		}
		if (!flag||num1==0) cout << "NO" << endl;
		else cout << "YES" << endl;

    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; ++i) cin >> b[i];

    int max_ratio = 0, count = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(b[j] % a[i] == 0) {
                int ratio = b[j] / a[i];
                if(ratio > max_ratio) {
                    max_ratio = ratio;
                    count = 1;
                } else if(ratio == max_ratio) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, h, y1, y2, l;
    cin >> n >> h >> y1 >> y2 >> l;

    vector<pair<int, int>> barrier(n);
    for (int i = 0; i < n; ++i) {
      cin >> barrier[i].first >> barrier[i].second;
    }

    int passed = 0;
    for (int i = 0; i < n; ++i) {
      int type = barrier[i].first;
      int x = barrier[i].second;

      if (type == 1) {
        if (x < h - y1) {
          l--;
        }
      } else {
        if (y2 < x) {
          l--;
        }
      }

      if (l > 0) {
        passed++;
      }
      if (l <= 0) {
        break;
      }
    }
    cout << passed << endl;
  }
  return 0;
}
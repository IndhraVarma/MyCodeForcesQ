#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void solve1() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    long long s1 = (long long)(y2 - y1) * (y2 - y1) + (long long)(x2 - x1) * (x2 - x1);
    long long s2 = (long long)(y3 - y2) * (y3 - y2) + (long long)(x3 - x2) * (x3 - x2);
    long long s3 = (long long)(y3 - y1) * (y3 - y1) + (long long)(x3 - x1) * (x3 - x1);

    if (s1 != s2 && s2 != s3 && s1 != s3) {
        cout << "Scalene triangle" << endl;
    } else {
        cout << "Isosceles triangle" << endl;
    }
}

void solve2() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    long long s1 = (long long)(y2 - y1) * (y2 - y1) + (long long)(x2 - x1) * (x2 - x1);
    long long s2 = (long long)(y3 - y2) * (y3 - y2) + (long long)(x3 - x2) * (x3 - x2);
    long long s3 = (long long)(y3 - y1) * (y3 - y1) + (long long)(x3 - x1) * (x3 - x1);

    if (s1 == 0 || s2 == 0 || s3 == 0) return;

    long long a[3] = {s1, s2, s3};
    sort(a, a + 3);

    if (a[0] != a[1] && a[1] != a[2]) {
        if (a[0] + a[1] == a[2]) {
            cout << "Scalene right triangle" << endl;
        } else if (a[0] + a[1] > a[2]) {
            cout << "Scalene acute triangle" << endl;
        } else {
            cout << "Scalene obtuse triangle" << endl;
        }
    } else {
        if (a[0] + a[1] == a[2]) {
            cout << "Isosceles right triangle" << endl;
        } else if (a[0] + a[1] > a[2]) {
            cout << "Isosceles acute triangle" << endl;
        } else {
            cout << "Isosceles obtuse triangle" << endl;
        }
    }
}

int main() {
    int subID, tt;
    cin >> subID;
    cin >> tt;
    while (tt--) {
        if (subID == 1) {
            solve1();
        } else {
            solve2();
        }
    }
    return 0;
}
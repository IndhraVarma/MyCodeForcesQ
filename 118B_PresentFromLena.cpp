#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Top half
    for (int i = 0; i <= n; i++) {
        // Leading spaces
        for (int space = 0; space < 2 * (n - i); space++) {
            cout << " ";
        }

        // Print numbers: 0 to i
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        // Print numbers: i-1 to 0
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 0; i--) {
        for (int space = 0; space < 2 * (n - i); space++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << endl;
    }

    return 0;
}

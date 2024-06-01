#include <bits/stdc++.h>
using namespace std;

void print_diamond(int n) {
    int spaces = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = (i <= n) ? i : 2 * n - i;

        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }

        cout << endl;

        spaces = (i < n) ? spaces - 2 : spaces + 2;
    }
}

int main() {
    int n;

    cin >> n;

    print_diamond(n);

    return 0;
}

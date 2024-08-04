#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int friends, height, width;
    long long int sum = 0;

    cin >> friends >> height;

    while (friends--) {
        cin >> width;

        if (width > height) {
            sum += 2;
            continue;
        }

        sum += 1;
    }

    cout << sum;

    return 0;
}
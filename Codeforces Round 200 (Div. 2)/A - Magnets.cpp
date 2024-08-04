#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;

    vector<int> magnet(cases);
    int sum = 1;

    for (int i = 0; i < cases; i++) {
        cin >> magnet[i];
        if (magnet[i-1] != magnet[i] && i != 0) {
            sum++;
        }
    }

    cout << sum;

    return 0;
}
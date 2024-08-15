#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numb;
    pair<int, int> one;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> numb;

            if (numb == 1) {
                one = {i, j};
            }
        }
    }

    cout << abs(2 - one.first) + abs(2 - one.second);

    return 0;
}
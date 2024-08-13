#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int games;
    int anton = 0;
    int danik = 0;
    char winner;

    cin >> games;

    while (games--) {
        cin >> winner;

        if (winner == 'A') {
            anton += 1;
        }

        else {
            danik += 1;
        }
    }

    if (anton > danik) {
        cout << "Anton";
    }

    else if (danik > anton) {
        cout << "Danik";
    }

    else {
        cout << "Friendship";
    }

    return 0;
}
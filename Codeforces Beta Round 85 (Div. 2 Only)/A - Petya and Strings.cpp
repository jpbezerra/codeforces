#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string first, second;

    cin >> first >> second;
    int size = first.length();
    bool over = false;

    for (int i = 0; i < size; i++) {
        if (tolower(first[i]) < tolower(second[i])) {
            cout << -1;
            over = true;
            break;
        }

        if (tolower(first[i]) > tolower(second[i])) {
            cout << 1;
            over = true;
            break;
        }
    }

    if (!over) {
        cout << 0;
    }

    return 0;
}
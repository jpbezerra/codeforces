#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int numb;
    cin >> numb;

    if (numb % 2 == 0) {
        cout << numb / 2;
    }

    else {
        cout << numb / 2 - numb;
    }

    return 0;
}
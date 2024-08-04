#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, years;
    cin >> a >> b;

    do {
        a *= 3;
        b *= 2;
        years++;

    } while (b >= a);

    cout << years;

    return 0;
}
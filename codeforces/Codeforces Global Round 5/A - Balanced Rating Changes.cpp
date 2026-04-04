#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

void process() {
    int n; cin >> n;

    bool is_ceil = false;

    while (n--) {
        int a; cin >> a;

        if (a % 2 == 0) {
            cout << a/2 << "\n";
        } else {
            if (is_ceil) {
                cout << (a+1)/2 << "\n";
            } else {
                cout << (a-1)/2 << "\n";
            }
            is_ceil = !is_ceil;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    process();
    
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int problems, number;
    int sum = 0;
 
    cin >> problems;
 
    while (problems--) {
        int temp = 0;
 
        for (int i = 0; i < 3; i++) {
            cin >> number;
 
            if (number == 1) {
                temp += number;
            }
        }
 
        if (temp >= 2) {
            sum += 1;
        }
    }
 
    cout << sum;
 
    return 0;
}
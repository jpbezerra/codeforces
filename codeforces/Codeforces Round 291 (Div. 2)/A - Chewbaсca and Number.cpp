#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   string number; cin >> number;

   for (int i = 0; i < number.length(); i++) {
      int digit = number[i] - '0';

      if (digit > 4 && (i != 0 || 9 - digit != 0)) {
         digit = 9 - digit;
      }

      cout << digit;
   }

   return 0;
}
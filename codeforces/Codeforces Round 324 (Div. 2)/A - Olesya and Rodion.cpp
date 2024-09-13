#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int len, div;
   cin >> len >> div;

   if (len == 1 && div == 10) {
      cout << "-1";
   }

   else {
      int max;

      if (div == 10) {
         max = len - 2;
      }

      else {
         max = len - 1;
      }

      cout << div;

      for (int i = 0; i < max; i++) {
         cout << 0;
      }
   }

   return 0;
}
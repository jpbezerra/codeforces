#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int len, firstTop, secondTop;
   cin >> len >> firstTop;
   secondTop = 7 - firstTop;
   bool result = true;

   for (int i = 0; i < len; i++) {
      int firstSide, secondSide;
      cin >> firstSide >> secondSide;

      if (firstSide == firstTop || firstSide == secondTop || secondSide == firstTop || secondSide == secondTop) {
         result = false;
         break;
      }
   }

   if (result) {
      cout << "YES";
   }

   else {
      cout << "NO";
   }

   return 0;
}
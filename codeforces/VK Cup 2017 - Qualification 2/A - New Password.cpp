#include <bits/stdc++.h>

using namespace std;

int main() {
   int letters, diff;
   char base = 'a';

   cin >> letters >> diff;

   for (int i = 0; i < letters; i++) {
      cout << base;

      base++;
      if (base - 'a' == diff) {
         base = 'a';
      }
   }

   return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   string word;
   cin >> word;

   int len = word.length();

   for (int i = 0; i < len; i++) {
      if (word[i] == 'W' && word[i + 1] == 'U' && word[i + 2] == 'B') {
         i += 2;
      }

      else {
         cout << word[i];

         if (word[i + 1] == 'W' && word[i + 2] == 'U' && word[i + 3] == 'B') {
            cout << ' ';
         }
      }
   }

   return 0;
}
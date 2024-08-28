#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int levels, cases, level;
   cin >> levels >> cases;

   set<int> passed;

   for (int i = 0; i < cases; i++) {
      cin >> level;
      passed.insert(level);
   }

   cin >> cases;
   for (int i = 0; i < cases; i++) {
      cin >> level;
      passed.insert(level);
   }

   if (passed.size() == levels) {
      cout << "I become the guy.";
   }

   else {
      cout << "Oh, my keyboard!";
   }

   return 0;
}
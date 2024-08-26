#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
   
   int cases;
   cin >> cases;

   vector<int> first, second, third;
   first.reserve(cases);
   second.reserve(cases);
   third.reserve(cases);

   for (int i = 0; i < cases; i++) {
      int temp;
      cin >> temp;

      if (temp == 1) {
         first.push_back(i + 1);
      }

      else if (temp == 2) {
         second.push_back(i + 1);
      }

      else {
         third.push_back(i + 1);
      }
   }

   int size = min(first.size(), min(second.size(), third.size()));
   cout << size << '\n';

   for (int i = 0; i < size; i++) {
      cout << first[i] << ' ' << second[i] << ' ' << third[i] << '\n';
   }

   return 0;
}

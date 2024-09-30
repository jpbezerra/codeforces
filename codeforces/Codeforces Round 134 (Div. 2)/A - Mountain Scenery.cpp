#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int size, peaks;
   cin >> size >> peaks;

   size = (size * 2) + 1;

   vector<int> mountain(size);

   for (int i = 0; i < size; i++) {
      cin >> mountain[i];
   }

   for (int i = 1; i < size; i += 2) {
      if (mountain[i] - 1 > mountain[i + 1] && mountain[i] - 1 > mountain[i - 1] && peaks != 0) {
         mountain[i]--;
         peaks--;
      }
   }

   for (int i = 0; i < size; i++) {
      cout << mountain[i] << ' ';
   }

   return 0;
}
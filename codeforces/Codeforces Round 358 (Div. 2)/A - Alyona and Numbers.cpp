#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int first, second;
   cin >> first >> second;

   vector<int> numbers(5);

   for (int i = 1; i < 5; i++) {
      for (int j = 5 - i; j <= second; j += 5) {
         numbers[i - 1]++;
      }
   }

   numbers[4] = second / 5;

   lli result = 0;

   for (int i = 0; i < first; i++) {
      result += numbers[i % 5];
   }

   cout << result;

   return 0;
}
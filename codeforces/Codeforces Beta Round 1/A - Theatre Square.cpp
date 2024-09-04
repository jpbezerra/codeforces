#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   lli n, m, a, countN = 0, countM = 0;
   cin >> n >> m >> a;

   if (n % a == 0) {
      countN = n / a;
   }

   else {
      countN = (n / a) + 1;
   }

   if (m % a == 0) {
      countM = m / a;
   }

   else {
      countM = (m / a) + 1;
   }

   cout << countN * countM;

   return 0;
}
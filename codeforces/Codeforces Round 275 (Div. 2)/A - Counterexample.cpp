#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   lli numb1, numb2;
   cin >> numb1 >> numb2;

   if (numb1 % 2 != 0) {
      numb1++;
   }

   if (abs(numb2-numb1) < 2) {
      cout << -1;
   }

   else {
      cout << numb1 << " " << numb1 + 1 << " " << numb1 + 2;
   }

   return 0;
}
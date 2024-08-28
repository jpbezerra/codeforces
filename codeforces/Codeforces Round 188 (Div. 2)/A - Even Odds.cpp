#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   lli n, k, number, aux;
   cin >> n >> k;
   aux = (n + 1) / 2;

   if (k > aux) {
      number = (k - aux) * 2;
   }

   else {
      number = (k * 2) - 1;
   }

   cout << number;

   return 0;
}
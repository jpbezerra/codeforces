#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int cases;
   cin >> cases;

   string result;
   vector<int> rates(cases);

   for (int i = 0; i < cases; i++) {
      int numb1, numb2;
      cin >> numb1 >> numb2;

      rates[i] = numb2;

      if (numb1 != numb2) {
         result = "rated";
      }
   }

   if (result == "") {
      vector<int> aux = rates;
      sort(rates.begin(), rates.end(), greater<>());

      for (int i = 0; i < cases; i++) {
         if (rates[i] != aux[i]) {
            result = "unrated";
            break;
         }

         result = "maybe";
      }
   }

   cout << result;

   return 0;
}
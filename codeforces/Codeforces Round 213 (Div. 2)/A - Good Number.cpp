#include <bits/stdc++.h>

using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int cases, number;
   cin >> cases >> number;

   int result = 0;

   for (int i = 0; i < cases; i++) {
      vector<bool> aux(number + 1);
      int temp = 0;

      string s;
      cin >> s;

      for (auto c: s) {
         aux[c - '0'] = true;
      }

      for (auto value: aux) {
         if (!value) {
            temp = 0;
            break;
         }

         temp++;
      }

      result += temp / aux.size();
   }

   cout << result;

   return 0;
}
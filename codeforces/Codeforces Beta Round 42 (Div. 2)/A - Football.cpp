#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int n;
   cin >> n;

   string str;
   unordered_map<string, int> goals;

   for (int i = 0; i < n; i++) {
      cin >> str;
      goals[str]++;
   }

   string result;
   int compare = 0;

   for (auto teams: goals) {
      if (teams.second > compare) {
         compare = teams.second;
         result = teams.first;
      }
   }

   cout << result;

   return 0;
}
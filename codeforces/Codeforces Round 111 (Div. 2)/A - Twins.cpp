#include <bits/stdc++.h>

using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int cases, total = 0;
   cin >> cases;

   priority_queue<int> pq;

   for (int i = 0; i < cases; i++) {
      int numb;
      cin >> numb;

      pq.push(numb);
      total += numb;
   }

   int currSum, coins = 0;
   while (currSum <= (total/2)) {
      currSum += pq.top();
      pq.pop();
      coins++;
   }

   cout << coins;

   return 0;
}
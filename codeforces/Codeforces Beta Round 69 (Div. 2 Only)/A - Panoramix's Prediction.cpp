#include <bits/stdc++.h>

using namespace std;

int BS(vector<int> numbers, int l, int r, int target) {
   if (r >= l) {
      int m = (l + r) / 2;

      if (numbers[m] == target) {
         return m;
      }

      if (numbers[m] < target) {
         return BS(numbers, m + 1, r, target);
      }

      return BS(numbers, l, m - 1, target);
   }
}

vector<int> get_primes(int prime, int next) {
   bool aux = false;
   vector<int> numbers;
   numbers.reserve(next);

   numbers.push_back(2);

   for (int i = 3; i < next + 1; ++i) {
      for (auto number: numbers) {
         if (i % number == 0) {
            aux = true;
            break;
         }
      }

      if (!aux) {
         numbers.push_back(i);
      }

      aux = false;
   }

   return numbers;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int prime, next;
   cin >> prime >> next;

   vector<int> numbers = get_primes(prime, next);
   int idx = BS(numbers, 0, numbers.size() - 1, prime);

   if (numbers[idx + 1] == next) {
      cout << "YES";
   }

   else {
      cout << "NO";
   }

   return 0;
}
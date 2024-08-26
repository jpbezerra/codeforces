#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases, snack, bigger;
    cin >> cases;

    bigger = cases;
    priority_queue<int> pq;

    for (int i = 0; i < cases; i++) {
        cin >> snack;
        pq.push(snack);

        if (snack == bigger) {
            for (int j = cases - bigger; j < cases; j++) {
                if (pq.top() == bigger) {
                    cout << pq.top() << " ";
                    pq.pop();
                    bigger--;
                }   

                else {
                    break;
                }
            }
        }

        cout << '\n';
    }

   return 0;
}
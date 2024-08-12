#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    priority_queue<int, vector<int>, greater<int>> heap;
 
    int cases, numb;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> numb;
        heap.push(numb);
    }
 
    int size = heap.size();
    for (int i = 0; i < size; i++) {
        cout << heap.top() << " ";
        heap.pop();
    }
 
    return 0;
}

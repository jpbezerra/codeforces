#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    int size = word.size();
    int lower = 0;
    int upper = 0;

    for (int i = 0; i < size; i++) {
        if (word[i] < 97) {
            upper++;
        }

        else {
            lower++;
        }
    }

    if (upper > lower) {
        for (int i = 0; i < size; i++) {
            word[i] = toupper(word[i]);
        }
    }

    else {
        for (int i = 0; i < size; i++) {
            word[i] = tolower(word[i]);
        }
    }

    cout << word;

    return 0;
}
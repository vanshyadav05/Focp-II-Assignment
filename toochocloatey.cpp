#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[1000];
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a, a + n);

        int alex = 0, bob = 0;
        int last = -1;
        bool turn = true;

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == last) continue;

            if (turn) alex += a[i];
            else bob += a[i];

            last = a[i];
            turn = !turn;
        }

        if (alex > bob) cout << "Alex\n";
        else cout << "Bob\n";
    }

    return 0;
}
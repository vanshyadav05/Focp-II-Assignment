#include <iostream>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    int count = 0;

    for (int i = L; i <= R; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }

    if (count % 2 != 0)
        cout << "odd";
    else
        cout << "even";

    return 0;
}
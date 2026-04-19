#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
string s;
 cin >> s;

for (int k = 1; k <= n; k++) {
 int ops = 0;
 for (int i = 0; i < n; ) {
 if (s[i] == '1') {
  ops++;
if (ops > m) break;
  i += k;
} else {
 i++;
  } 
 }

if (ops <= m) {
     cout << k;
     break;
        }
}

 return 0;
}
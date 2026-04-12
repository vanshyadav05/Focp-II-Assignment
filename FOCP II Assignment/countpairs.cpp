#include <iostream>
using namespace std;

int countDistinctPrimes(int n) {
int count = 0;
if (n % 2 == 0) {
count++;
 while (n % 2 == 0) {
     n /= 2;
        }
    }
for (int i = 3; i * i <= n; i += 2) {
     if (n % i == 0) {
    count++;
    while (n % i == 0) {
     n /= i;
      } 
     }
    }

 if (n > 1) {
    count++;
 }

 return count;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(NULL);

int T;
 cin >> T;
 while (T--) {
int n;
 cin >> n;
 int k = countDistinctPrimes(n);
int ans = 1;
for (int i = 0; i < k; i++) {
  ans *= 2;
 }
 cout << ans << "\n";
}
return 0;
}
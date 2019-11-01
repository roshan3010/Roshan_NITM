#include<bits/stdc++.h>
  using namespace std;
int Sieve(long long int n) {

  bool prime[n + 1];
  memset(prime, true, sizeof(prime));

  for (int p = 2; p * p <= n; p++) {

    if (prime[p] == true) {

      for (int i = p * 2; i <= n; i += p)
        prime[i] = false;
    }
  }

  if (prime[n])
    return 1;
  else
    return 0;
}

int SieveOfEratosthenes(long long int n, long long int x) {
  long long int s;
  bool prime[n + 1];
  memset(prime, true, sizeof(prime));
  for (long long int p = 2; p * p <= n; p++) {
    if (prime[p] == true) {
      for (long long int i = p * 2; i <= n; i += p)
        prime[i] = false;
    }
  }

  for (long long int p = 2; p <= n; p++) {
    if (prime[p] && p >= x) {
      int m = 0;
      s = p;
      while (s != 0) {
        m += s % 10;
        s = s / 10;
      }
      int k = Sieve(m);
      if (k == 1)
        cout << p << " ";

    }
  }
}
int main() {
  int k;
  long long int a, b, i, j;
  cin >> a >> b;
  if (a > b)
    SieveOfEratosthenes(a, b);
  else
    SieveOfEratosthenes(b, a);

}
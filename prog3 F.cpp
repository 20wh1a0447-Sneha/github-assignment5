#include <iostream>
using namespace std;
bool isPrime(int);
int main() {
  int n;
  cout << "Enter a positive  integer: ";
  cin >> n;
  if (isPrime(n))
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";
  return 0;
}
bool isPrime(int n) {
  bool is_Prime = true;
  if (n == 0 || n == 1) {
    is_Prime = false;
  }
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_Prime = false;
      break;
    }
  }
  return is_Prime;
}

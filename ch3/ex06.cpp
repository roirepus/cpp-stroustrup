#include <bits/stdc++.h>
using namespace std;

int main() {

  cout << "enter three integers: ";
  int a, b, c;
  cin >> a >> b >> c;
  int huge, mid, smol;
  if (a >= b && a >= c) {
    huge = a;
  } else if (b >= a && b >= c) {
    huge = b;
  } else {
    huge = c;
  }

  if (a >= b && a <= c) {
    mid = a;
    smol = b;
  } else if (b >= a && b <= c) {
    mid = b;
    smol = a;
  } else if (c >= b && c <= a) {
    mid = c;
    smol = b;
  } else if (a >= c && a <= b) {
    mid = a;
    smol = c;
  }

  cout << smol << ", " << mid << ", " << huge;

  return 0;
}

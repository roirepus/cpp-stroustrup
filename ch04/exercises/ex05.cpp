#include <bits/stdc++.h>
using namespace std;

int main() {

  double val1, val2;
  char sign;

  cout << "enter two values: \n";
  cin >> val1 >> val2;
  cout << "enter operator(+,-,/,*)\n";
  cin >> sign;
  switch (sign) {
  case '+':
    cout << val1 + val2;
    break;
  case '-':
    cout << val1 - val2;
    break;
  case '*':
    cout << val1 * val2;
    break;
  case '/':
    cout << val1 / val2;
    break;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<string> v = {"0",    "1",    "2",   "3",     "4",     "5",   "6",
                      "7",    "8",    "9",   "zero",  "one",   "two", "three",
                      "four", "five", "six", "seven", "eight", "nine"};
  cout << "enter two digits: ";
  string inp1, inp2;
  cin >> inp1 >> inp2;
  int val1, val2;
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == inp1 && i < 10) {
      val1 = i;
    } else if (v[i] == inp2 && i < 10) {
      val2 = i;
    } else if (v[i] == inp1 && i > 9) {
      val1 = i - 10;
    } else if (v[i] == inp2 && i > 9) {
      val2 = i - 10;
    } else {
      cout << "invalid input";
      return 0;
    }
  }
  cout << "enter operator(+,-,/,*)\n";
  char sign;
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

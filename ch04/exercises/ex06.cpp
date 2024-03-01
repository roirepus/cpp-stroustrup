#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  vector<string> v{"zero", "one", "two",   "three", "four",
                   "five", "six", "seven", "eight", "nine"};
  // cout << "enter a digit: \n";
  // int digit;
  // cin >> digit;
  // cout << v[digit];

  cout << "enter digit in words: \n";
  string digit;
  cin >> digit;
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == digit) {
      cout << i;
    }
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  cout << "enter two values: ";
  int val1, val2;
  cin >> val1 >> val2;

  int smaller;
  if (val1 > val2) {
    cout << val2 << " is smaller\n";
    cout << val1 << " is larger\n";
  } else if (val1 < val2) {
    cout << val1 << " is smaller\n";
    cout << val2 << " is larger\n";
  } else {
    cout << "both are equal\n";
  }
  int sum = val1 + val2;
  cout << "sum: " << sum << '\n';

  int diff = abs(val1 - val2);
  cout << "diff: " << diff << '\n';

  int product = val1 * val2;
  cout << "product: " << product << '\n';

  double ratio = double(val1) / val2;

  cout << "ratio: " << ratio << '\n';

  return 0;
}

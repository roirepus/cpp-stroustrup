#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  cout << "enter value: \n";
  double value;
  cin >> value;
  cout << "choose unit(y/k/p): \n";
  char unit;
  cin >> unit;

  //  if (unit == 'y') {
  //    cout << value << " yen  = " << value * 0.0066 << " dollars\n";
  //  } else if (unit == 'k') {
  //    cout << value << " kroner  = " << value * 0.094 << " dollars\n";
  //  } else if (unit == 'p') {
  //    cout << value << " pound  = " << value * 1.26 << " dollars\n";
  //  } else {
  //    cout << "invalid unit!";
  //  }
  switch (unit) {
  case 'y':
    cout << value << " yen  = " << value * 0.0066 << " dollars\n";
    break;
  case 'k':
    cout << value << " kroner  = " << value * 0.094 << " dollars\n";
    break;
  case 'p':
    cout << value << " pound  = " << value * 1.26 << " dollars\n";
    break;
  default:
    cout << "invalid unit!";
    break;
  }

  return 0;
}

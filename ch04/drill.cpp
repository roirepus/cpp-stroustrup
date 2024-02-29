#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  double x, y;
  double largest = 0, smallest = 4985792540973590;
  while (cin >> x) {
    smallest = x;
    if (x > largest) {
      largest = x;
    } else if (x < smallest) {
      smallest = x;
    }
  }

  cout << "largest is: " << largest << "\nsmallest is: " << smallest << '\n';
  return 0;
}

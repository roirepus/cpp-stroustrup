#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  vector<double> dists;
  cout << "enter no of cities: \n";
  int n;
  cin >> n;
  for (int i = 0; i < n - 1; ++i) {
    double x;
    cin >> x;
    dists.push_back(x);
  }
  double sum = 0;

  double largest{0}, smallest{dists[0]};
  for (double a : dists) {

    sum += a;
    if (a > largest) {
      largest = a;
    }
    if (a < smallest) {
      smallest = a;
    }
  }
  cout << "total distance: " << sum << "\n";
  cout << "largest distance: " << largest << "\n";
  cout << "smallest distance: " << smallest << "\n";
  cout << "mean distance: " << sum / (n - 1) << "\n";

  return 0;
}

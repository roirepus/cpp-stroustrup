#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  cout << "enter no of elements: ";
  int n;

  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  if (n % 2 == 0) {
    double sum = v[(n / 2) - 1] + v[(n / 2)];
    cout << "median: " << sum / 2;
  } else {
    cout << "median: " << v[((n + 1) / 2) - 1];
  }
  return 0;
}

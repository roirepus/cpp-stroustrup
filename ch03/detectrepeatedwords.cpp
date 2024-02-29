#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  string previous = " ";
  string current;
  while (cin >> current) {
    if (previous == current)
      cout << current << endl;
    previous = current;
  }
  return 0;
}

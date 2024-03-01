#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
  int grains{1};
  int goal{1};
  int square{1};
  while (goal <= 1000) {
    grains *= 2;
    goal += grains;
    square++;
  }
  cout << "square for 1000 grains = " << square << "\n";
  cout << pow(2, 10);
  return 0;
}

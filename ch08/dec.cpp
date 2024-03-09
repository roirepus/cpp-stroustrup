#include "extern.cpp"
#include <iostream>
using namespace std;

extern int x;
int main() {

  int x = 4;
  cout << x;

  return 0;
}

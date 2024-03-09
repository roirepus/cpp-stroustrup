#include <iostream>
using namespace std;

int main() {

  cout << "enter an expression: \n";
  cout << "add an x to end expression: \n";
  int lval{0};
  int rval{0};
  int result;
  cin >> lval;
  if (!lval)
    throw runtime_error("no first operand");
  for (char op; cin >> op;) {
    if (op != 'x')
      cin >> rval;
    if (!cin)
      throw runtime_error("no second operand");
    switch (op) {
    case '+':
      lval += rval;
      break;
    case '-':
      lval -= rval;
      break;
    case '*':
      lval *= rval;
      break;

    case '/':

      lval /= rval;
      break;
    default:
      cout << "result: " << lval << '\n';
      return 0;
    }
  }
  throw runtime_error("bad expression");
  return 0;
}

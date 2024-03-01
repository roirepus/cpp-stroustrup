#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<string> names;
  vector<int> scores;
  string name = "";
  int score{100};
  while (name != "NoName" && score != 0) {
    cin >> name;
    names.push_back(name);
    cin >> score;
    scores.push_back(score);
  }
  for (string s : names) {
    cout << s << '\t';
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  cout << "press c to continue q to quit ";
  string s;

  char ans{};
  cin >> ans;
  vector<string> v{"stone", "paper", "scissors"};
  while (ans == 'c') {
    srand(time(NULL));

    int myChoice = (rand() % 3);
    cout << "choose your option(I've mine ready!): ";

    cin >> s;
    int chosen;
    for (int i = 0; i < 3; i++) {
      if (v[i] == s) {
        chosen = i;
      }
    }
    if (chosen == myChoice) {
      cout << "that is a draw!\ncontinue?(c/e)\n";
      cin >> ans;
      cout << "choose your option(I've mine ready!): ";
      cin >> s;

    } else {
      switch (chosen) {
      case 0:
        if (myChoice == 1) {
          cout << "paper! I won!\ncontinue?(c/e)\n";
          cin >> ans;

          cout << "choose your option(I've mine ready!): ";
          cin >> s;
        } else {

          cout << "scissors! You won!\ncontinue?(c/e)\n";
          cin >> ans;
          cout << "choose your option(I've mine ready!): ";
          cin >> s;
        }
      case 1:
        if (myChoice == 0) {
          cout << "stone! You won!\ncontinue?(c/e)\n";
          cin >> ans;
          cout << "choose your option(I've mine ready!): ";
          cin >> s;

        } else {

          cout << "scissors! I won!\ncontinue?(c/e)\n";
          cin >> ans;
          cout << "choose your option(I've mine ready!): ";
          cin >> s;
        }
      case 2:
        if (myChoice == 0) {
          cout << "stone! I won!\ncontinue?(c/e)\n";
          cin >> ans;
          cout << "choose your option(I've mine ready!): ";
          cin >> s;

        } else {

          cout << "paper! You won!\ncontinue?(c/e)\n";
          cin >> ans;
          cout << "choose your option(I've mine ready!): ";
          cin >> s;
        }
      }
    }
  }

  return 0;
}

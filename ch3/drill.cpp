#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {

  cout << "enter your name: \n";
  string name;
  cin >> name;
  cout << "hello, " << name << endl;

  cout << "enter who you wanna write to: \n";
  string letter = "";
  string toName;
  cin >> toName;
  letter += "Dear " + toName + ", how're are you? I am fine. I miss you.";
  cout << "enter another friend name: \n";
  string anotherFriend;
  cin >> anotherFriend;
  letter += " Have you seen " + anotherFriend + " lately?";
  char fSex = '0';
  cout << "enter your friend's gender(m/f): \n";
  cin >> fSex;
  if (fSex == 'm') {
    letter += " If you see " + anotherFriend + " please ask him to call me.";
  } else {
    letter += " If you see " + anotherFriend + " please ask her to call me.";
  }
  int age;
  cout << "enter recipient age: \n";
  cin >> age;

  letter += " I hear you just had a birthday and you are " + to_string(age) +
            " years old.";
  if (age < 12) {
    letter += " Next year you will be" + to_string(age) + " years old.";
  }

  else if (age == 17) {

    letter += " Next year you will be able to vote";
  } else if (age > 70) {

    letter += "I hope you are enjoying your retirement.";
  }
  letter += "\nYours sincerely,\n \n" + name;
  cout << letter;

  return 0;
}

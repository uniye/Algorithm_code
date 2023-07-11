#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<char> st;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    string input;
    getline(cin, input);

    if (input == ".") {
      break;
    }

    stack<char> s;
    bool bol = false;
    for (int i = 0; i < input.length(); i++) {
      char c = input[i];

      if ((c == '(') || (c == '[')) {
        s.push(c);
      }
      else if (c == ')') {
        if (!s.empty() && s.top() == '(') {
          s.pop();
        }
        else {
          bol = true;
          break;
        }
      }
      else if (c == ']') {
        if (!s.empty() && s.top() == '[') {
          s.pop();
        }
        else {
          bol = true;
          break;
        }
      }
    }

    if (bol == false && s.empty()) {
      cout << "yes" << endl;
    }
    else {
      cout << "no" << endl;
    }

  }
  
  return 0;
}


#include<iostream>
#include<vector>

using namespace std;

class Math {
public:
  vector<int> digits(int base) {
    vector<int> result;
    int answer = base - 1;

    for (int i = 2; i <= answer; i++) {
      if (answer % i == 0) {
        result.emplace_back(i);
      }
    }
    return result;
  }
};

int main() {
  ios_base::sync_with_stdio(false);

  int base = 30;
  Math ma;
  vector<int> result = ma.digits(base);
  
  vector<int>::iterator it;
  for (it = result.begin(); it != result.end(); it++)
  {
    cout << *it << ' ';
  }

  return 0;
}



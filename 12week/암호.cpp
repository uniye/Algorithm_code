#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Code {
public:
  long long encrypt(vector<long long> numbers) {
    long long answer = 0;
    for (int i = 0; i < numbers.size(); i++)
    {
      long long re = 1;
      
      for (int j = 0; j < numbers.size(); j++)
      {
        if (i == j) re *= numbers[j] + 1;
        else re *= numbers[j];
      }
      answer = max(re, answer);
    }
    return answer;
  }
};

int main() {
  ios_base::sync_with_stdio(false);

  vector<long long> numbers = {1000,999,998,997,996,995};

  Code code;
  long long result = code.encrypt(numbers);

  cout << result;
  return 0;
}


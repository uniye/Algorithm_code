#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// n이 작을 수록 값이 커짐을 이용

class Code {
public:
  long long encrypt(vector<long long> numbers) {
    long long answer = 1;
    sort(numbers.begin(), numbers.end());
    numbers[0]++;
    for (int i = 0; i < numbers.size(); i++)
    {
      answer *= numbers[i];
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


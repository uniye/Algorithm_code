#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, string>> vec;

// 처음에 vector 인덱스 0~199까지 나이로 하려 했는데 
// 어떻게 구현할지 모르겠어서
// 일단은 pair을 사용
// stable_sort와 sort에 대한 차이점 => 10814.md 참고


bool compair(pair<int, string> age, pair<int, string> name){
  return age.first < name.first;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, age;
  string name;
  cin >> N;

  while (N--) {
    cin >> age >> name;
    vec.push_back(make_pair(age, name));
  }

  stable_sort(vec.begin(), vec.end(), compair);

  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i].first << " " << vec[i].second << "\n";
  }

  return 0;
}


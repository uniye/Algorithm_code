#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

// 최대공약수가 간격 맞춰주는 애.
// (가로수들 간격 / 최대공약수) -1 을 모두 더한 것이 정답

vector<int> vec;
vector<int> dis(1000000,0);

int Gcd(int a, int b) {
  int r = a % b;
  if (r == 0) return b;
  else return Gcd(b, r);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, gcd, cnt=0, tree;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> tree;
    vec.emplace_back(tree);
  }
  sort(vec.begin(), vec.end());

  for (int i = 0; i < N - 1; i++) {
    dis[i] = vec[i + 1] - vec[i];
  }


  gcd = dis[0];
  for (int i = 0; i < N-1; i++)
  {
    gcd = Gcd(gcd, dis[i]);
  }

  for (int i = 0; i < N - 1; i++) {
    cnt += (dis[i] / gcd) - 1;
  }

  cout << cnt;

  return 0;
}

#include<iostream>
#include<stack>
using namespace std;

stack<int> st;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  long long K;
  cin >> K;

  for (int i = 0; i < K; i++)
  {
    int a;
    cin >> a;
    if (a == 0) { 
      st.pop(); 
    }
    else st.push(a);
  }
  int result =0;
  for (int i = 0; i < K; i++)
  {
    if (st.empty()) break;
    result += st.top();
    st.pop();
  }

  cout << result;

  return 0;
}

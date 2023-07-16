#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class KiwiJuice {
  public:
    vector<int> thePouring(vector<int> capacities,
      vector<int> bottles, vector<int> fromId,
      vector<int> toId) {
      for (int i = 0; i < fromId.size(); i++)
      {
        int m = min(bottles[fromId[i]], capacities[toId[i]] - bottles[toId[i]]);
        bottles[fromId[i]] -= m;
        bottles[toId[i]] += m;
      }
      return bottles;
    }

};

int main() {
  vector<int> capacities = { 700000,800000,900000,1000000 };
  vector<int> bottles = { 478478,478478,478478,478478 };
  vector<int> fromId = { 2,3,2,0,1 };
  vector<int> toId = { 0,1,1,3,2 };
  KiwiJuice kiwi;
  vector<int> result = kiwi.thePouring(capacities, bottles, fromId, toId);
  for (auto l : result)
  {
    cout << l << '\n';
  }
  
  return 0;
}

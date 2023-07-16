#include<iostream>
#include<vector>

using namespace std;

 //기존 주스: "옮길 주스와 기존 주스의 총합"과 "기존 주스 병의 용량"에서 작은값
 //옮길 주스: "옮길 주스와 기존 주스의 총합"에서 위의 값을 제외한 값

class KiwiJuice2 {
public:
  vector<int> thePouring(vector<int> capacities,
    vector<int> bottles, vector<int> fromId,
    vector<int> toId) {
    for (int i = 0; i < fromId.size(); i++)
    {
      int sum = bottles[fromId[i]] + bottles[toId[i]];
      bottles[toId[i]] = min(sum, capacities[toId[i]]);
      bottles[fromId[i]] = sum - bottles[toId[i]];
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

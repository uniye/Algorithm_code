#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Party {
public:
  int bestInvitation(vector<string> first, vector<string> second) {
    int answer = 0;
    map<string, int> ma;
    for (int i = 0; i < first.size(); i++)
    {
      ma[first[i]] = 0;
      ma[second[i]] = 0;
    }
    for (int i = 0; i < first.size(); i++)
    {
      ma[first[i]]++;
      ma[second[i]]++;
    }
    map<string, int>::iterator it;
    for (it = ma.begin(); it != ma.end(); it++)
    {
      answer = max(answer, it->second);
    }
    
    return answer;
  }
};

int main() {
  ios_base::sync_with_stdio(false);

  vector<string> first = {"t","o","p","c","o","d","e" ,"r","s" ,"i","n" ,"g","l","e","r","o","u","n","d","m","a","t","c","h","f","o","u","r","n","i" };
  vector<string> second = { "n","e","f","o","u","r","j" ,"a","n" ,"u","a" ,"r","y","t","w","e","n","t","y","t","w","o","s","a","t","u","r","d","a","y" };

  Party pa;

  int answer = pa.bestInvitation(first, second);

  cout << answer;


  return 0;
}


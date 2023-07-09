#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
// 알고리즘 지식을 더 머리에 채울 것.... 
// key와 value 쌍으로 이루어진 트리 map을 이용.(중복x) ->레드블랙트리
// 기본형태는 map<key,value> map1; 

vector<string> solution(vector<string> players, vector<string> callings)
{
    vector<string> answer;

    map<string, int> m;
    for (int i = 0; i < players.size(); i++) m[players[i]] = i; // payers에 있는 값을 키로 하고 i를 value로


    int s1, s2;
    string tmp;
    for (int i = 0; i < callings.size(); i++)
    {
        s2 = m[callings[i]]; //callings에 있는 문자열 순서 m에서 찾아서 s2에 넣기  
		  s1 = s2 - 1; // 하나 앞댕기기
        m[players[s2]]--; //s2키의 value를 앞으로 보내기
        m[players[s1]]++; //s1키를 value를 뒤로 보내기
        // 순서 바꾸기.
        tmp = players[s2]; //players의 순서도 바꾸는 중.
        players[s2] = players[s1];
        players[s1] = tmp;
    }

    answer = players;

    return answer;
}

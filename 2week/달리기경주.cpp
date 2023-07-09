#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
// �˰��� ������ �� �Ӹ��� ä�� ��.... 
// key�� value ������ �̷���� Ʈ�� map�� �̿�.(�ߺ�x) ->�����Ʈ��
// �⺻���´� map<key,value> map1; 

vector<string> solution(vector<string> players, vector<string> callings)
{
    vector<string> answer;

    map<string, int> m;
    for (int i = 0; i < players.size(); i++) m[players[i]] = i; // payers�� �ִ� ���� Ű�� �ϰ� i�� value��


    int s1, s2;
    string tmp;
    for (int i = 0; i < callings.size(); i++)
    {
        s2 = m[callings[i]]; //callings�� �ִ� ���ڿ� ���� m���� ã�Ƽ� s2�� �ֱ�  
		  s1 = s2 - 1; // �ϳ� �մ���
        m[players[s2]]--; //s2Ű�� value�� ������ ������
        m[players[s1]]++; //s1Ű�� value�� �ڷ� ������
        // ���� �ٲٱ�.
        tmp = players[s2]; //players�� ������ �ٲٴ� ��.
        players[s2] = players[s1];
        players[s1] = tmp;
    }

    answer = players;

    return answer;
}

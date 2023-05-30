#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {

    vector<int> answer(id_list.size(), 0);
    map<string, int> id_map; //id가 들어있는 맵
    map<string, set<string>> report_map; //결과

    for (int i = 0; i < id_list.size(); ++i) {
        id_map[id_list[i]] = i;
    }

    
    for (auto rep : report) { // [신고된id, 신고한id]를 Map에 저장

        stringstream ss(rep); //문자 나누기
        string from, to;
        ss >> from >> to;
        report_map[to].insert(from);

    }

    for (auto iter : report_map) {
        if (iter.second.size() >= k) {
            for (auto in_iter : iter.second) {
                answer[id_map[in_iter]]++;
            }
        }
    }

    return answer;
}


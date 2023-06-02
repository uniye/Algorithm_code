#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> terms_map;

    for (auto& term : terms)
    {
        terms_map[term[0]] = stoi(string(term.begin() + 1, term.end()));
    }

    int year = stoi(string(today, 0, 4)) - 2000;
    int month = stoi(string(today, 5, 7)) - 1;
    int day = stoi(string(today, 8, 10)) - 1;
    int todays = (year * 12 * 28) + month * 28 + day; //몇일이 지났는가


    for (int i = 0; i < terms.size(); i++) {
        stringstream ss(terms[i]);
        char a; 
        int month;
        ss >> a >> month;
        terms_map[a] = month;
    }

    for (int i = 0; i < privacies.size(); ++i)
    {
        const string& privacy = privacies[i];
        string day(privacy.begin(), privacy.begin() + 10);
        char term = privacy[11];

        int month = terms_map[term];

        int term_year = month / 12;
        int term_month = month % 12;

        int privacy_year = stoi(string(privacy, 0, 4)) + term_year;
        int privacy_month = stoi(string(privacy, 5, 7)) + term_month;
        int privacy_day = stoi(string(privacy, 8, 10)) - 1;

        privacy_year -= 2000;
        privacy_month -= 1;
        privacy_day -= 1;

        int limit_day = (privacy_year * 12 * 28) + privacy_month * 28 + privacy_day;
        if (todays > limit_day)
        {
            answer.push_back(i + 1);
        }
    }


    return answer;
}




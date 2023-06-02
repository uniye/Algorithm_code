#include <iostream>
#include <string>

using namespace std;

//공백을 기준으로 다른 인자라고 판단하여, 공백 문자가 나오기 이전까지의 문자들만 입력이 되는 문제가 있다.

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	/*string word; 
	cin >> word;*/ //띄어쓰기는 못 받아들이는 듯
    string word;
    getline(cin, word);
	for (int i = 0; i < word.length(); i++)
	{
        if ((word[i] >= 'A' && word[i] <= 'A' + 12) || (word[i] >= 'a' && word[i] <= 'a' + 12))

            cout << (char)(word[i] + 13);

        else if ((word[i] >= '0' && word[i] <= '9') || word[i] == ' ')

            cout << word[i];

        else

            cout << (char)(word[i] - 13);
	} 
	return 0;
}

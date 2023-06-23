#include <iostream>

using namespace std;

//bool타입 이용

int main() {
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		bool check = true;
		string word;
		cin >> word;
		int size = word.length();
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (word[j] != word[j - 1] && word[j] == word[k]) {
					check = false;
					break;
				}
				if (check == false) break;
			}

		}
		if (check) ++sum;
	}
	cout << sum << "\n";
	return 0;

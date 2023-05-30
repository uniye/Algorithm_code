#include <iostream>
#include <string>

using namespace std;

int main() {
    string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
    string n;
    int result[3];
    long long res = 0;

    for (int i = 0; i < 3; ++i) {
        cin >> n;
        for (int j = 0; j < 10; ++j) {
            if (color[j] == n) result[i] = j;
        }
    }

    res = result[0] * 10 + result[1];
    for (int i = 0; i < result[2]; ++i) res *= 10;
    cout << res << endl;

    return 0;
}
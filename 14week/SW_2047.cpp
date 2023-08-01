#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
    string sInput;
    cin >> sInput;
    for (int i = 0; i < sInput.size(); i++)
    {
        if ((sInput[i] < 97) || (sInput[i] > 122))
            continue;
        sInput[i] -= 32;
    }
    cout << sInput;
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
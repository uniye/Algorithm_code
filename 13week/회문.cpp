#include<iostream>
#include<string>
using namespace std;

class ThePalindrome 
{
public:
    int find(string sWord)
    {
        for (int i = sWord.size(); ; i++)
        {
            bool bBol(1);
            for (int j = 0; j < sWord.size(); j++)
            {
                if (((i - j - 1) < sWord.size()) && (sWord[j] != sWord[i - j - 1]))
                {
                    bBol = 0;
                    break;
                }
            }
            if (bBol)
            {
                return i;
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string sWord = "abdfhdyrbdbsdfghjkllkjhgfds"; 
    int iResult(0);
    ThePalindrome TheP;

    iResult = TheP.find(sWord);

    cout << iResult;

    return 0;
}


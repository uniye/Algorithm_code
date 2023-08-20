#include<iostream>
#include<string>
using namespace std;

class NumberMagicEasy
{
    char Check(int iX[], int _iNumber)
    {
        for (int i = 0; i < 8; i++)
        {
            if (iX[i] == _iNumber) return 'Y';
        }
        return 'N';
    }
public:
    int theNumber(string sAnswer)
    {
        int iA[] = { 1,2,3,4,5,6,7,8 };
        int iB[] = { 1,2,3,4,9,10,11,12 };
        int iC[] = { 1,2,5,6,9,10,13,14 };
        int iD[] = { 1,3,5,7,9,11,13,15 };
        for (int i = 0; i <= 16; i++)
        {
            if (Check(iA, i) != sAnswer[0]) continue;
            if (Check(iB, i) != sAnswer[1]) continue;
            if (Check(iC, i) != sAnswer[2]) continue;
            if (Check(iD, i) != sAnswer[3]) continue;
            return i;
        }
        return 0;
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string sAnswer = "YNYY";
    int iReturn(0);

    NumberMagicEasy NME;
    iReturn = NME.theNumber(sAnswer);

    cout << iReturn;


    return 0;
}


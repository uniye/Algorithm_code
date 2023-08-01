#include<iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int iArr[6] = {};
    int iInput(0), iOdd(0), iEven(0);
    for (int i = 0; i < 6; i++)
    {
        cin >> iInput;
        iArr[i] = iInput;
    }


    if (iArr[0] == iArr[2])
    {
        iEven = iArr[4];
    }
    else if (iArr[0] == iArr[4])
    {
        iEven = iArr[2];
    }
    else if (iArr[2] == iArr[4])
    {
        iEven = iArr[0];
    }

    if (iArr[1] == iArr[3])
    {
        iOdd = iArr[5];
    }
    else if (iArr[1] == iArr[5])
    {
        iOdd = iArr[3];
    }
    else if (iArr[3] == iArr[5])
    {
        iOdd = iArr[1];
    }

    cout << iEven << " " << iOdd;

    return 0;
}




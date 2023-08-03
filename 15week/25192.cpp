#include<iostream>
#include<string>
#include<map>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int iN(0), iUseGum(0);
    string sInput="";


    cin >> iN;
    map<string, bool> mCheck;
    
    for (size_t i = 0; i < iN; i++)
    {
        cin >> sInput;
        if ("ENTER" == sInput)
        {
            mCheck = {};
        }
        else
        {   
            //O(logn)복잡도
            if (mCheck.find(sInput) == mCheck.end()) 
            {
                mCheck.insert({ sInput,1 });
                iUseGum++;
            }
        }
    }
    cout << iUseGum;


    return 0;
}


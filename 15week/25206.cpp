#include<iostream>
#include<map>

using namespace std;

map<string, double> mDung = { {"A+",4.5},{"A0",4.},
                              {"B+",3.5},{"B0",3.},
                              {"C+",2.5},{"C0",2.},
                              {"D+",1.5},{"D0",1.0},
                              {"F",0.0} };


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    double dJunAvg(0.), dHak(0.), dGwaAvg(0.), dSumHak(0.), dEachJun(0.);
    string sGwaName = "", sDung = "";
    for (int i = 0; i < 20; i++)
    {
        cin >> sGwaName >> dHak >> sDung;
        if ("P" == sDung)
            continue;
        dEachJun += dHak * mDung[sDung];
        dSumHak += dHak;
    }
    dJunAvg = dEachJun / dSumHak;
    cout << dJunAvg;

    return 0;
}


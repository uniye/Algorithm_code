#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; i++)
    {
        int iDem(1);
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0) iDem++;
        }
        if (iDem > limit) iDem = power;
        answer += iDem;
    }

    return answer;
}


//시간초과 - 실패
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int number, int limit, int power) {
//    int answer = 0;
//    for (int i = 1; i <= number; i++)
//    {
//        int iDem(0);
//        for (int j = 1; j <= number; j++)
//        {
//            if (i % j == 0) iDem++;
//        }
//        if (iDem > limit) iDem = power;
//        answer += iDem;
//    }
//
//    return answer;
//}


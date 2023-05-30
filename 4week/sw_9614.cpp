#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//다채로운구간: 
//예를 들어 n=5 k=3에 12312이면
//답은 123 231 321 1231 2312 12312 총 6개
//<슬라이딩 윈도우 기법 사용...!> 이런 방법이 있는줄 몰랐다 두둥...!


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long n, k;
		long long result=0;
		cin >> n >> k;
		vector<int> vec(n);
		for (int j = 0; j < n; j++) cin >> vec[j];
		long long a = k;
        int start = 0, end = 0;
        vector<int> unrdered_map(k + 1, 0);
        int distinct_count = 0;

        while (end < n) { //슬라이딩 윈도우
            unrdered_map[vec[end]]++;
            if (unrdered_map[vec[end]] == 1) {
                distinct_count++;
            }

            while (distinct_count == k) {
                result += n - end;
                unrdered_map[vec[start]]--;
                if (unrdered_map[vec[start]] == 0) {
                    distinct_count--;
                }
                start++;
            }
            end++;
        }
		cout << "#" << i+1 << " " << result << "\n";
	}

	return 0;
}



//실패...
// 실패 이유: find함수의 범위... find(시작구간,끝구간,찾을수)에서 끝구간의 변경은 옳지않음... 
// 좀더 공부를 해봐야할 부분 
//int main() {
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		long long n, k;
//		long long result=0;
//		cin >> n >> k;
//		vector<int> vec(n);
//		for (int j = 0; j < n; j++) cin >> vec[j];
//		long long a = k;
//		while (a != n) {
//			for (long long l = 0; l < n; l++)
//			{
//				long long cnt = 0;
//				for (long long j = 1; j <= a; j++) {
//					if (l + a - 1 <= n) {
//						cout<<(find(vec.begin() + l, vec.begin() + (l + a - 1), j) != vec.end())<<"\n";
//						if (find(vec.begin() + l, vec.begin() + (l + a - 1), j) != vec.end()) cnt++;
//						cout <<"cnt: " << cnt << "\n";
//						if (cnt ==  a) {
//							result++;
//							cout << l << "result: " << result<<"\n";
//						}
//						
//					}
//				}
//
//			}
//			a++;
//		}
//		cout << "#" << i+1 << " " << result << "\n";
//	}
//
//	return 0;
//}






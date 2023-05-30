#include <iostream>

using namespace std;

// https://ko.khanacademy.org/computing/computer-science/cryptography/comp-number-theory/v/sieve-of-eratosthenes-prime-adventure-part-4
// 2부터 1씩 값을 올려주며 그 수의 배수인 값을 지워야함

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();
    int K, N, list[1001] = {}, result = 0, cnt = 0;
	cin >> N >> K;
    for (int i = 2; i <= N; i++)
    {
        for (int j = i; j <= N; j += i) //배수 처리
        {
            if (list[j] == 0) { 
                cnt++; 
                list[j] = 1; 
            }
            if (cnt == K) { //k번째 지워진 수
                result = j; 
                break; 
            }
        }
        if (cnt == K) break;
    }
    cout << result << '\n';
	return 0;
}
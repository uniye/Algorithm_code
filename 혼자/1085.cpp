#include <iostream>
#include <algorithm>
//아래쪽 경계선까지의 거리는 x,y이고 위쪽 경계선까지의 거리는 w-x, h-y이다.
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    int x, y, w, h;
    int r1, r2;
    cin >> x >> y >> w >> h;
    r1 = min(x, y);
    r2 = min(w - x, h - y);
    cout << min(r1, r2);
}


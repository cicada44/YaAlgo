//-----------------------------------------------------------------------------
//
// Source code for 'E' task from contest №3 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27663/problems/E/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <set>

int main() {
    int x, y, z, n;

    std::cin >> x >> y >> z;
    std::cin >> n;

    std::set<int> s;

    int cnt = 0;
    while (n > 0) {
        if (s.find(n % 10) == s.end()) ++cnt;
        s.insert(n % 10);
        n /= 10;
    }

    cnt -=
        ((int)(s.find(x) != s.end()) + (int)(s.find(y) != s.end()) + (int)(s.find(z) != s.end()));

    std::cout << cnt << '\n';
}

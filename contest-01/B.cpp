//-----------------------------------------------------------------------------
//
// Source code for 'B' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/B/
//
//-----------------------------------------------------------------------------

#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}

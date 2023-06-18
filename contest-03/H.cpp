//-----------------------------------------------------------------------------
//
// Source code for 'H' task from contest №3 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27663/problems/H/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> polygon;
    int size, x, y;

    std::cin >> size;

    for (int i = 0; i != size; ++i) {
        std::cin >> x >> y;
        polygon.insert(x);
    }

    std::cout << polygon.size() << '\n';
}

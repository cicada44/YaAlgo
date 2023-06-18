//-----------------------------------------------------------------------------
//
// Source code for 'D' task from contest №4 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27665/problems/D/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <map>

int main() {
    std::map<unsigned, int> keys;

    int keynum, pressnum, pressing, tmp;

    std::cin >> keynum;
    for (int i = 0; i != keynum; ++i) {
        std::cin >> tmp;
        keys[i + 1] = tmp;
    }

    std::cin >> pressnum;
    for (int i = 0; i != pressnum; ++i) {
        std::cin >> pressing;
        --keys.at(pressing);
    }

    for (const auto &c : keys) { std::cout << ((c.second < 0) ? "YES" : "NO") << '\n'; }
}

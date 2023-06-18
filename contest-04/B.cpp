//-----------------------------------------------------------------------------
//
// Source code for 'B' task from contest №4 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27665/problems/B/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::vector<std::pair<std::string, unsigned>> m;
    std::map<std::string, unsigned> count;

    std::string inputable;
    while (std::cin >> inputable) {
        m.push_back({inputable, count[inputable]});
        count[inputable]++;
    }

    for (const auto &c : m) { std::cout << c.second << ' '; }
    std::cout << '\n';
}

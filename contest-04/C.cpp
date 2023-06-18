//-----------------------------------------------------------------------------
//
// Source code for 'C' task from contest №4 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27665/problems/C/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, unsigned> count;

    std::string inputable;
    while (std::cin >> inputable) { count[inputable]++; }

    std::cout << std::max_element(count.begin(), count.end(),
                                  [](const std::pair<std::string, unsigned>& p1,
                                     const std::pair<std::string, unsigned>& p2) {
                                      return (p1.second < p2.second);
                                  })
                     ->first
              << '\n';
}

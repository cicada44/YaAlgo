//-----------------------------------------------------------------------------
//
// Source code for 'B' task from contest №2 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27472/problems/B/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> vec;
    std::string prev_status, status;

    int tmp;
    while (std::cin >> tmp && tmp != -2000000000) { vec.push_back(tmp); }

    int next, actual;
    for (auto i = vec.begin(); i != std::prev(vec.end()); ++i) {}

    std::cout << status << '\n';
}
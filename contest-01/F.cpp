//-----------------------------------------------------------------------------
//
// Source code for 'F' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/F/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int a1, a2, b1, b2, s1, s2, s3, s4;

    std::cin >> a1 >> b1 >> a2 >> b2;

    std::vector<std::pair<int, std::pair<int, int>>> total{
        {(a1 + a2) * ((b1 > b2) ? b1 : b2), {a1 + a2, ((b1 > b2) ? b1 : b2)}},
        {(a1 + b2) * ((a2 > b1) ? a2 : b1), {a1 + b2, ((a2 > b1) ? a2 : b1)}},
        {(b1 + a2) * ((b2 > a1) ? b2 : a1), {b1 + a2, ((b2 > a1) ? b2 : a1)}},
        {(b1 + b2) * ((a1 > a2) ? a1 : a2), {b1 + b2, ((a1 > a2) ? a1 : a2)}}};

    auto min = std::min_element(total.begin(), total.end(),
                                [](const std::pair<int, std::pair<int, int>>& p1,
                                   const std::pair<int, std::pair<int, int>>& p2) {
                                    return p1.first < p2.first;
                                })
                   ->second;

    std::cout << min.first << ' ' << min.second;
}

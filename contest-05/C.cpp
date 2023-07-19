//-----------------------------------------------------------------------------
//
// Source code for 'C' task from contest №5 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27794/problems/C/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <map>
#include <vector>

#include <iostream>

int main() {
    int N, M, x, y, s, f;

    std::vector<int> heights, heightsPrefSum{0}, heightsPrefSumReverse{0};
    std::vector<std::pair<int, int>> ways;

    std::cin >> N;
    for (int i = 0; i != N; ++i) {
        std::cin >> x >> y;
        heights.push_back(y);
    }

    std::cin >> M;
    for (int i = 0; i != M; ++i) {
        std::cin >> s >> f;
        ways.push_back({s, f});
    }

    for (auto i = std::next(heights.begin()), end = heights.end(); i != end; ++i) {
        if (*i >= *std::prev(i))
            heightsPrefSum.push_back(*i - *std::prev(i) + heightsPrefSum.back());
        else
            heightsPrefSum.push_back(heightsPrefSum.back());
    }
    for (auto i = std::next(heights.rbegin()), end = heights.rend(); i != end; ++i) {
        if (*i >= *std::prev(i))
            heightsPrefSumReverse.push_back(*i - *std::prev(i) + heightsPrefSumReverse.back());
        else
            heightsPrefSumReverse.push_back(heightsPrefSumReverse.back());
    }

    for (const auto &p : ways) {
        if (p.first < p.second) {
            std::cout << heightsPrefSum[p.second - 1] - heightsPrefSum[p.first - 1];
        } else {
            std::cout << heightsPrefSumReverse[N - p.second] - heightsPrefSumReverse[N - p.first];
        }
        std::cout << '\n';
    }
}

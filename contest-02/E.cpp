//-----------------------------------------------------------------------------
//
// Source code for 'E' task from contest №2 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27472/problems/E/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;
    std::vector<int> vec;
    int tmp;
    for (int i = 0; i != size; ++i) {
        std::cin >> tmp;
        vec.push_back(tmp);
    }

    int winner_pos = std::distance(vec.begin(), std::max_element(vec.begin(), vec.end()));

    int accum = -1;
    for (auto i = vec.begin(); i != std::prev(vec.end()); ++i) {
        if (*i % 10 == 5 && winner_pos < std::distance(vec.begin(), i) && *std::next(i) < *i) {
            accum = *i;
        }
    }

    if (accum == -1 || vec.empty()) {
        std::cout << 0;
    } else {
        std::stable_sort(vec.rbegin(), vec.rend());
        std::cout << std::distance(vec.begin(), std::find(vec.begin(), vec.end(), accum)) + 1;
    }
}

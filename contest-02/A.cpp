//-----------------------------------------------------------------------------
//
// Source code for 'A' task from contest №2 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27472/problems/A/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <vector>

int main() {
    bool incr = true;
    std::vector<int> vec;

    int tmp;
    while (std::cin >> tmp && tmp != '\n') { vec.push_back(tmp); }

    if (vec.size() == 0) {
        std::cout << "NO\n";
    } else {
        for (auto c = std::next(vec.begin()); c != vec.end(); ++c) {
            if (*c <= *(c - 1)) {
                incr = false;
                break;
            }
        }

        (incr == false) ? std::cout << "NO\n" : std::cout << "YES\n";
    }
}
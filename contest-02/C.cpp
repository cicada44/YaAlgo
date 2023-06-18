//-----------------------------------------------------------------------------
//
// Source code for 'С' task from contest №2 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27472/problems/С/
//
//-----------------------------------------------------------------------------

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

    int to_find;
    std::cin >> to_find;

    int max = abs(vec.at(0) - to_find);
    int num = vec.at(0);

    for (auto i = vec.begin(); i != vec.end(); ++i) {
        if (abs(*i - to_find) < max) {
            max = abs(*i - to_find);
            num = *i;
        }
    }

    std::cout << num;
}

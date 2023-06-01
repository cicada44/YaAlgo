//-----------------------------------------------------------------------------
//
// Source code for 'B' Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27663/problems/B/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <set>

int main() {
    std::set<int> s1;
    std::set<int> s2;

    int inputable;
    char end;
    do {
        scanf("%d%c\n", &inputable, &end);
        s1.insert(inputable);
    } while (end != '\n');
    do {
        scanf("%d%c\n", &inputable, &end);
        s2.insert(inputable);
    } while (end != '\n');

    for (const auto& c : s1) {
        if (s2.find(c) != s2.end()) { std::cout << c << ' '; }
    }

    std::cout << '\n';
}

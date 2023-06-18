//-----------------------------------------------------------------------------
//
// Source code for 'C' task from contest №3 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27663/problems/C/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <set>

int main() {
    std::set<int> A, B, T;
    int N, M;
    std::cin >> N >> M;

    int inputable;
    for (int i = 0; i != N; ++i) {
        std::cin >> inputable;
        A.insert(inputable);
    }
    for (int i = 0; i != M; ++i) {
        std::cin >> inputable;
        B.insert(inputable);
    }

    for (const auto &c : A) {
        if (B.find(c) != B.end()) T.insert(c);
    }

    std::cout << T.size() << '\n';
    for (const auto &c : T) { std::cout << c << ' '; }
    std::cout << '\n' << A.size() - T.size() << '\n';
    for (const auto &c : A) {
        if (B.find(c) == B.end()) std::cout << c << ' ';
    }
    std::cout << '\n' << B.size() - T.size() << '\n';
    for (const auto &c : B) {
        if (A.find(c) == A.end()) std::cout << c << ' ';
    }
    std::cout << '\n';
}

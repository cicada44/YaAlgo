//-----------------------------------------------------------------------------
//
// Source code for 'A' task from contest №7 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27883/problems/A/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> data;
    int N_stud, N, f, s;

    std::cin >> N_stud >> N;

    for (int i = 0; i != N; ++i) {
        std::cin >> f >> s;
        for (int j = f; j <= s; ++j) data.insert(j);
    }

    std::cout << N_stud - data.size() << '\n';
}

//-----------------------------------------------------------------------------
//
// Source code for 'A' task from contest №6 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27844/problems/A/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <unordered_set>

int main() {
    int N, K;
    std::cin >> N >> K;
    std::unordered_set<int> n1, n2;

    int insertable;
    for (int i = 0; i != N; ++i) {
        std::cin >> insertable;
        n1.insert(insertable);
    }
    for (int i = 0; i != K; ++i) {
        std::cin >> insertable;
        std::cout << ((n1.find(insertable) != n1.end()) ? "YES" : "NO") << '\n';
    }
}

//-----------------------------------------------------------------------------
//
// Source code for 'G' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/G/
//
//-----------------------------------------------------------------------------

#include <iostream>

int main() {
    int N, K, M, total, aod, aob, lb, ld;
    total = aod = aob = lb = ld = 0;

    std::cin >> N >> K >> M;

    while (N >= K && K >= M) {
        aod = K / M;
        aob = N / K;
        ld = (K % M) * aob;
        lb = N % K;

        N = lb + ld;

        total += aob * aod;
    }

    std::cout << total;
}

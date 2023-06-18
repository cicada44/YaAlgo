//-----------------------------------------------------------------------------
//
// Source code for 'H' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/A/
//
//-----------------------------------------------------------------------------

#include <cmath>
#include <iostream>

int main() {
    int a, b, n, m;

    std::cin >> a >> b >> n >> m;

    int total_min = 0, total_max = 0;
    int tmp_a = n + (a * (n - 1));
    int tmp_b = m + (b * (m - 1));

    total_min = std::max(tmp_a, tmp_b);

    int tmp_a_max = n + (a * (n - 1)) + a;
    int tmp_b_max = m + (b * (m - 1)) + b;
    total_max = std::max(tmp_a_max, tmp_b_max);

    std::cout << total_min << ' ' << total_max << '\n';
}

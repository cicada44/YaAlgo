//-----------------------------------------------------------------------------
//
// Source code for 'B' task from contest №5 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27794/problems/B/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums{0};
    int inputable = 0, n, k, cntseq = 0;

    std::cin >> n >> k;

    for (int i = 0; i != n; ++i) {
        std::cin >> inputable;
        nums.push_back(inputable + nums.back());
    }

    auto first = nums.begin(), last = nums.begin();

    while (last != nums.end()) {
        if (*last - *first == k) {
            ++cntseq;
            ++first;
        } else {
            ++last;
        }
    }

    std::cout << cntseq << '\n';
}

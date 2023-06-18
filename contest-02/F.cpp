//-----------------------------------------------------------------------------
//
// Source code for 'F' task from contest №2 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27472/problems/F/
//
//-----------------------------------------------------------------------------

#include <cmath>
#include <iostream>
#include <vector>

bool is_symm(std::vector<int>::iterator iter1, std::vector<int>::iterator iter2) {
    while (iter1 <= iter2) {
        if (*iter1++ != *iter2--) { return false; }
    }
    return true;
}

int main() {
    int size;
    std::cin >> size;

    std::vector<int> nums;
    int tmp;
    while (std::cin >> tmp) { nums.push_back(tmp); }

    std::vector<int> nums_to_add;

    int n = 0;
    auto beg = nums.begin();
    auto end = std::prev(nums.end());

    while (nums_to_add.empty()) {
        if (is_symm(beg, end)) {
            --beg;
            while (beg >= nums.begin()) {
                nums_to_add.push_back(*beg--);
                ++n;
            }
            break;
        } else {
            ++beg;
        }
    }

    std::cout << n << '\n';
    for (const auto &c : nums_to_add) { std::cout << c << ' '; }
    std::cout << '\n';
}

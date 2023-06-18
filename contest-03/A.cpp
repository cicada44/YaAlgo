//-----------------------------------------------------------------------------
//
// Source code for 'A' task from contest №3 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27663/problems/A/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <set>

int main() {
    std::set<int> nums;
    int tmp;

    while (std::cin >> tmp) { nums.insert(tmp); }

    std::cout << nums.size();
}

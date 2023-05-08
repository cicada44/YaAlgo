#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <vector>

int main() {
    std::list<int> l;

    int tmp;
    while (std::cin >> tmp) l.push_back(tmp);

    std::list<int> lh1(l), lh2(l);

    auto m1 = std::max_element(lh1.begin(), lh1.end());
    int max1 = *m1;
    lh1.erase(m1);
    auto m2 = std::max_element(lh1.begin(), lh1.end());
    int max2 = *m2;

    auto ms1 = std::min_element(lh2.begin(), lh2.end());
    int maxs1 = *ms1;
    lh2.erase(ms1);
    auto ms2 = std::min_element(lh2.begin(), lh2.end());
    int maxs2 = *ms2;

    if (max1 * max2 > maxs1 * maxs2) {
        std::cout << std::min(max1, max2) << ' ' << std::max(max1, max2);
    } else {
        std::cout << std::min(maxs1, maxs2) << ' ' << std::max(maxs1, maxs2);
    }
}

//-----------------------------------------------------------------------------
//
// Source code for 'I' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/I/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int a, b, c, d, e, penult, minSideBrick, maxSideHole, minSideHole;

    std::cin >> a >> b >> c >> d >> e;

    std::vector<int> v{a, b, c};

    auto minElemIter = std::min_element(v.begin(), v.end());
    minSideBrick = *minElemIter;
    v.erase(minElemIter);
    
    penult = *std::min_element(v.begin(), v.end());
    maxSideHole = std::max(d, e);
    minSideHole = std::min(d, e);

    if ((minSideBrick <= maxSideHole && penult <= minSideHole) ||
        (minSideBrick <= minSideHole && penult <= maxSideHole)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

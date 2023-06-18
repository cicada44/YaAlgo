//-----------------------------------------------------------------------------
//
// Source code for 'A' task from contest №5 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27794/problems/A/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <vector>

int main() {
    std::vector<int> shirts, trousers;
    int n1, n2, ins;

    std::cin >> n1;
    for (int i = 0; i != n1; ++i) {
        std::cin >> ins;
        shirts.push_back(ins);
    }

    std::cin >> n2;
    for (int i = 0; i != n2; ++i) {
        std::cin >> ins;
        trousers.push_back(ins);
    }

    auto shirtsPtr = shirts.begin(), trousersPtr = trousers.begin();
    int diff = abs(*shirtsPtr - *trousersPtr), actShirts = *shirtsPtr, actTrousers = *trousersPtr;

    while (shirtsPtr != shirts.end() && trousersPtr != trousers.end()) {
        if (diff > abs(*shirtsPtr - *trousersPtr)) {
            diff = abs(*shirtsPtr - *trousersPtr);
            actShirts = *shirtsPtr;
            actTrousers = *trousersPtr;
        }

        if (*shirtsPtr < *trousersPtr) {
            ++shirtsPtr;
        } else if (*shirtsPtr > *trousersPtr) {
            ++trousersPtr;
        } else {
            break;
        }
    }

    std::cout << actShirts << ' ' << actTrousers << '\n';
}

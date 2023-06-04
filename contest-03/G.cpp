//-----------------------------------------------------------------------------
//
// Source code for 'G' Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27663/problems/G/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <map>
#include <unordered_map>
#include <unordered_set>

int main() {
    std::unordered_map<int, int> turtles;
    std::unordered_map<int, std::pair<int, int>> liers;
    int n, a, b;

    std::cin >> n;

    int m = 0;
    for (int i = 0; i != n; ++i) {
        std::cin >> a >> b;
        ++turtles[a + b];
        if (m < turtles.at(a + b)) {
            if (liers.find(a + b) != liers.end()) {
                if (liers.find(a + b)->second.first != a && liers.find(a + b)->second.second != b) {
                    m = turtles.at(a + b);
                }
            } else {
                m = turtles.at(a + b);
            }
        }
        liers[a + b] = {a, b};
    }

    std::cout << m << '\n';
}

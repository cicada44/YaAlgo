#include <algorithm>
#include <iostream>
#include <limits>
#include <set>

int main() {
    std::set<int> s1;
    std::set<int> s2;

    int inputable;
    while (std::cin >> inputable) { s1.insert(inputable); }
    std::cin.clear();
    clearerr(stdin);
    while (std::cin >> inputable) { s2.insert(inputable); }

    for (const auto& c : s1) {
        if (s2.find(c) != s2.end()) { std::cout << c << ' '; }
    }

    std::cout << '\n';
}

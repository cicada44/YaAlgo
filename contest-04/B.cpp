#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::vector<std::pair<std::string, unsigned>> m;
    std::map<std::string, unsigned> count;

    std::string inputable;
    while (std::cin >> inputable) {
        m.push_back({inputable, count[inputable]});
        count[inputable]++;
    }

    for (const auto &c : m) { std::cout << c.second << ' '; }
    std::cout << '\n';
}

#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {
    std::string name, staff;
    int amount;
    std::map<std::string, std::map<std::string, int>> info;

    while (std::cin >> name >> staff >> amount) { info[name][staff] += amount; }

    for (const auto &c : info) {
        std::cout << c.first << ":\n";
        for (const auto &i : c.second) { std::cout << i.first << ' ' << i.second << '\n'; }
    }
    std::cout << '\n';
}

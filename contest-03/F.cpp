#include <iostream>
#include <set>
#include <string>

int main() {
    std::multiset<std::string> A, B;
    std::string a, b;

    std::cin >> a >> b;

    for (auto i = a.begin(); i != std::prev(a.end()); ++i)
        A.insert(std::string(i, std::next(i, 2)));

    for (auto i = b.begin(); i != std::prev(b.end()); ++i)
        B.insert(std::string(i, std::next(i, 2)));

    int total = 0;
    for (const auto &c : A) { total += (B.find(c) != B.end()); }

    std::cout << total << '\n';
}

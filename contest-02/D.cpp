#include <cmath>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    int tmp;
    while (std::cin >> tmp) { vec.push_back(tmp); }

    int num = 0;

    for (auto i = std::next(vec.begin()); i != vec.end(); ++i) {
        if (*i > *(i - 1) && *i > *(i + 1) && i != std::prev(vec.end())) {
            ++num;
        }
    }

    std::cout << num;
}

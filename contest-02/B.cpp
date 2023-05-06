#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> vec;
    std::string prev_status, status;

    int tmp;
    while (std::cin >> tmp && tmp != -2000000000) { vec.push_back(tmp); }

    int next, actual;
    for (auto i = vec.begin(); i != std::prev(vec.end()); ++i) {}

    std::cout << status << '\n';
}
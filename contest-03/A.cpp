#include <iostream>
#include <set>

int main() {
    std::set<int> nums;
    int tmp;

    while (std::cin >> tmp) { nums.insert(tmp); }

    std::cout << nums.size();
}

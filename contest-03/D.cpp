#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
    std::string inputable;
    std::vector<std::string> text;
    std::set<std::string> words;
    std::set<char> stop_words{};

    while (std::cin >> inputable) {
        auto pos = std::find_first_of(inputable.begin(), inputable.end(),
                                      stop_words.begin(), stop_words.end());
        if (pos != inputable.end()) inputable.erase(pos);
        words.insert(inputable);
    }

    std::cout << words.size() << '\n';
}

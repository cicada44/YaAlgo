#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> dict;
    std::string inputableWord, sentence, word, naturalWord;
    int nMistakes = 0, nDict;

    std::cin >> nDict;
    for (int i = 0; i != nDict; ++i) {
        std::cin >> inputableWord;
        dict.insert(inputableWord);
    }
    std::getline(std::cin >> std::ws, sentence, '\n');
    std::stringstream ssSentence(sentence);

    while (ssSentence >> word) {
        if (dict.find(word) == dict.end()) {
            int nUpper = 0;
            for (const auto &c : word) {
                if (std::isupper(c)) ++nUpper;
            }
            if (nUpper != 1) { ++nMistakes; }
        }
    }

    std::cout << nMistakes << '\n';
}

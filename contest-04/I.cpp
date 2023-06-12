#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>

int main() {
    std::unordered_map<std::string, std::unordered_set<std::string>> dict;
    std::string inputableWord, sentence, word, naturalWord;
    int nMistakes = 0, nDict;

    std::cin >> nDict;
    for (int i = 0; i != nDict; ++i) {
        std::cin >> word;
        inputableWord = word;
        std::for_each(inputableWord.begin(), inputableWord.end(),
                      [](char& c) { c = std::tolower(c); });
        dict.insert({inputableWord, {}});
        dict[inputableWord].insert(word);
    }
    std::getline(std::cin >> std::ws, sentence, '\n');
    std::stringstream ssSentence(sentence);

    while (ssSentence >> word) {
        naturalWord = word;
        std::for_each(naturalWord.begin(), naturalWord.end(), [](char& c) { c = std::tolower(c); });
        if (dict.find(naturalWord) != dict.end()) {
            if (dict[naturalWord].find(word) == dict[naturalWord].end() ||
                std::count_if(word.begin(), word.end(),
                              [](const char& c) { return std::isupper(c); }) != 1) {
                ++nMistakes;
            }
        } else if (std::count_if(word.begin(), word.end(),
                                 [](const char& c) { return std::isupper(c); }) != 1) {
            ++nMistakes;
        }
    }

    std::cout << nMistakes << '\n';
}

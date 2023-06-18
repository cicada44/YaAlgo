//-----------------------------------------------------------------------------
//
// Source code for 'I' task from contest №3 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27663/problems/I/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

int main() {
    std::unordered_map<int, std::unordered_set<std::string>> data;
    std::unordered_set<std::string> langs;
    int N, tmp_n;
    std::string s;

    std::cin >> N;

    for (int i = 0; i != N; ++i) {
        std::cin >> tmp_n;
        for (int j = 0; j != tmp_n; ++j) {
            std::cin >> s;
            data[i].insert(s);
            langs.insert(s);
        }
    }

    std::unordered_set<std::string> G, NG;

    for (const auto &c : langs) {
        bool f = 1;
        for (const auto &p : data) {
            if (p.second.find(c) == p.second.end()) {
                f = 0;
                break;
            }
        }

        if (f == true) {
            G.insert(c);
            NG.insert(c);
        } else {
            NG.insert(c);
        }
    }

    std::cout << G.size() << '\n';
    for (const auto &c : G) { std::cout << c << '\n'; }
    std::cout << NG.size() << '\n';
    for (const auto &c : NG) { std::cout << c << '\n'; }
}

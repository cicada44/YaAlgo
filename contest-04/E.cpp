//-----------------------------------------------------------------------------
//
// Source code for 'E' task from contest №4 Yandex algorithm training 1.0 task
// URL: https://contest.yandex.ru/contest/27665/problems/E/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <iostream>
#include <map>

int main() {
    std::map<int, int> blocks, reverse_blocks;

    int height = 0, n, width, tmp_h;
    std::cin >> n;
    for (int i = 0; i != n; ++i) {
        std::cin >> width >> tmp_h;
        if (blocks.find(width) != blocks.end()) {
            if (blocks.at(width) < tmp_h) {
                blocks[width] = tmp_h;
                reverse_blocks[tmp_h] = width;
            }
        } else {
            blocks[width] = tmp_h;
            reverse_blocks[tmp_h] = width;
        }
    }

    height += std::prev(reverse_blocks.end())->first;
    blocks.erase(std::prev(reverse_blocks.end())->second);

    for (const auto &c : blocks) { height += c.second; }

    std::cout << height << '\n';
}

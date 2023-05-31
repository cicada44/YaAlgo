#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_map>

int main() {
    int amount;
    std::string name, transfer_dest_name, action;
    std::unordered_map<std::string, int> bank;

    while (std::cin >> action) {
        if (action == "DEPOSIT") {
            std::cin >> name >> amount;
            bank[name] += amount;
        } else if (action == "INCOME") {
            std::cin >> amount;
            std::for_each(bank.begin(), bank.end(),
                          [&amount](std::pair<const std::string, int>& p) -> void {
                              if (p.second > 0) p.second += p.second * amount / 100;
                          });
        } else if (action == "WITHDRAW") {
            std::cin >> name >> amount;
            bank[name] -= amount;
        } else if (action == "BALANCE") {
            std::cin >> name;
            try {
                std::cout << bank.at(name) << '\n';
            } catch (const std::out_of_range& e) { std::cout << "ERROR\n"; }
        } else if (action == "TRANSFER") {
            std::cin >> name >> transfer_dest_name >> amount;
            bank[name] -= amount;
            bank[transfer_dest_name] += amount;
        }
    }
}

//-----------------------------------------------------------------------------
//
// Source code for 'A' task from contest №1 Yandex algorithm training 1.0
// URL: https://contest.yandex.ru/contest/27393/problems/A/
//
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>

int main() {
    int troom, tcond, tresult;
    std::string mode;

    std::cin >> troom >> tcond >> mode;

    if (mode == "heat") {
        if (troom < tcond) {
            tresult = tcond;
        } else {
            tresult = troom;
        }
    } else if (mode == "freeze") {
        if (troom > tcond) {
            tresult = tcond;
        } else {
            tresult = troom;
        }
    } else if (mode == "auto") {
        tresult = tcond;
    } else if (mode == "fan") {
        tresult = troom;
    } else {
        std::cout << "n/a\n";
    }

    std::cout << tresult;
}

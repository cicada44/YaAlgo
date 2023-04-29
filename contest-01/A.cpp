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

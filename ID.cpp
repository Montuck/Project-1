#include "ID.h"

void IDAutomaton::S0(const std::string& input) {
    if (input[index] == ' ') {
        inputRead = 1;
    }
    else {
        Serr();
    }
}

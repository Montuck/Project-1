#include "ID.h"

void IDAutomaton::S0(const std::string& input) {
    if (isalpha(input[index])) {
        inputRead += 1;
    }
    else if (isalnum(input[index])) {
        inputRead += 1;
    }
    else {
        Serr();
    }
}

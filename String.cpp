#include "String.h"

void StringAutomaton::S0(const std::string& input) {
    if (input[index] == '\'') {
        inputRead += 1;
        index += 1;
        S1(input);
    }
    else {
        Serr();
    }
}

void StringAutomaton::S1(const std::string& input) {
    if (input[index] != '\'') {
        inputRead += 1;
        index += 1;
        S1(input);
    }
    else if (input[index] == '\'') {
        inputRead += 1;
        index += 1;
    }
    else {
        Serr();
    }
}

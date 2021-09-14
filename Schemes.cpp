#include "Schemes.h"

void SchemesAutomaton::S0(const std::string& input) {
    if (input[index] == 'Schemes') {
        inputRead = 1;
    }
    else {
        Serr();
    }
}

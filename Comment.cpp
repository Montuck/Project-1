#include "Comment.h"

void CommentAutomaton::S0(const std::string& input) {
    if (input[index] == "#") {
        inputRead += 1;
    }
    else if (isalnum(input[index])) {
        inputRead += 1;
    }
    else {
        Serr();
    }
}
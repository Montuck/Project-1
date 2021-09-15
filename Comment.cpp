#include "Comment.h"

void CommentAutomaton::S0(const std::string& input) {
    if (input[index] == '#') {
        inputRead += 1;
        index += 1;
        S1(input);
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    if (input[index] != '\n') {
        inputRead += 1;
        index += 1;
        S1(input);
    }
    else if (input[index] == '\n') {
        inputRead += 1;
        index += 1;
    }
    else {
        Serr();
    }
}
#include "BlockComment.h"

void BlockCommentAutomaton::S0(const std::string& input) {
    if (input[index] == '#') {
        inputRead += 1;
        index += 1;
        S1(input);
    }
    else {
        Serr();
    }
}

void BlockCommentAutomaton::S1(const std::string& input) {
    if (input[index] == '|') {
        inputRead += 1;
        index += 1;
        S2(input);
    }
    else {
        Serr();
    }
}

void BlockCommentAutomaton::S2(const std::string& input) {
    if (input[index] != '|') {
        inputRead += 1;
        index += 1;
        S2(input);
    }
    else if (input[index] == '|') {
        inputRead += 1;
        index += 1;
        S3(input);
    }
    else {
        Serr();
    }
}

void BlockCommentAutomaton::S3(const std::string& input) {
    if (input[index] != '#') {
        inputRead += 1;
        index += 1;
    }
    else {
        Serr();
    }
}
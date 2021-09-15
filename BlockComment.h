//
// Created by oblit on 9/15/2021.
//
#ifndef BLOCKCOMMENT_H
#define BLOCKCOMMENT_H
#define COMMENT_H
#include "Automaton.h"

class BlockCommentAutomaton : public Automaton
{
public:
    BlockCommentAutomaton() : Automaton(TokenType::COMMENT) {}  // Call the base constructor

    void S0(const std::string& input);
    void S1(const std::string& input);
    void S2(const std::string& input);
    void S3(const std::string& input);
};

#endif
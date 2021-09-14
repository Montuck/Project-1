//
// Created by oblit on 9/13/2021.
//

#ifndef QUERIES_H
#define QUERIES_H
#include "Automaton.h"

class QueriesAutomaton : public Automaton
{
public:
    QueriesAutomaton() : Automaton(TokenType::QUERIES) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif

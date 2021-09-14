//
// Created by oblit on 9/13/2021.
//

#ifndef RULES_H
#define RULES_H
#include "Automaton.h"

class RulesAutomaton : public Automaton
{
public:
    RulesAutomaton() : Automaton(TokenType::RULES) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif

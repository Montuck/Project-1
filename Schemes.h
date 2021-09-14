//
// Created by oblit on 9/13/2021.
//

#ifndef SCHEMES_H
#define SCHEMES_H
#include "Automaton.h"

class SchemesAutomaton : public Automaton
{
public:
    SchemesAutomaton() : Automaton(TokenType::SCHEMES) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif
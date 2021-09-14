#include "Lexer.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include <iostream>

Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    // TODO: need to clean up the memory in `automata` and `tokens`
}

void Lexer::CreateAutomata() {
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    // TODO: Add the other needed automata here
}

void Lexer::Run(std::string& input) {
    int lineNumber = 1;
    int maxRead;
    Automaton *maxAutomaton;
    int inputRead;
    Token *newToken = NULL;
    while (input.size() > 0) {
        maxRead = 0;
        maxAutomaton = automata.front();
        for (int i = 0; i < automata.size(); i++) {
            inputRead = automata.at(i)->Start(input);
            if (inputRead > maxRead) {
                maxRead = inputRead;
                maxAutomaton = automata.at(i);
            }
        }
        if (maxRead > 0) {
            newToken = maxAutomaton->CreateToken(input, lineNumber);
            lineNumber += maxAutomaton->NewLinesRead();
            tokens.push_back(newToken);
        }
        else{
            maxRead = 1;
            newToken = new Token(TokenType::UNDEFINED, "", lineNumber);
            tokens.push_back(newToken);
        }
        input.erase(0, maxRead);
    }
    tokens.push_back(new Token(TokenType::EFO, "", lineNumber));
}

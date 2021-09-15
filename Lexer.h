#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include "Automaton.h"

class Lexer
{
private:
    std::vector<Automaton*> automata;
    std::vector<Token*> tokens;

    void CreateAutomata();

    // TODO: add any other private methods here (if needed)

public:
    Lexer();
    ~Lexer();

    void Run(std::string& input);
    void Print();
    // TODO: add other public methods here

};

#endif // LEXER_H




// TODO: convert this pseudo-code with the algorithm into actual C++ code

/*
   set lineNumber to 1
   // While there are more characters to tokenize
   loop while input.size() > 0 {
       set maxRead to 0
       set maxAutomaton to the first automaton in automata
// TODO: you need to handle whitespace in between tokens

       // Here is the "Parallel" part of the algorithm
       //   Each automaton runs with the same input
       foreach automaton in automata {
           inputRead = automaton.Start(input)
           if (inputRead > maxRead) {
               set maxRead to inputRead
               set maxAutomaton to automaton
           }
       }
       // Here is the "Max" part of the algorithm
       if maxRead > 0 {
           set newToken to maxAutomaton.CreateToken(...)
               increment lineNumber by maxAutomaton.NewLinesRead()
               add newToken to collection of all tokens
       }
       // No automaton accepted input
       // Create single character undefined token
       else {
           set maxRead to 1
               set newToken to a  new undefined Token
               (with first character of input)
               add newToken to collection of all tokens
       }
       // Update `input` by removing characters read to create Token
       remove maxRead characters from input
   }
   add end of file token to all tokens
   */


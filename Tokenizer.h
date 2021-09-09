//
// Created by oblit on 9/8/2021.
//

#ifndef TOKENIZER_H
#define TOKENIZER_H
#include "Token.h"
#include <string>

class Tokenizer {
private:

public:
    Tokenizer();
    ~Tokenizer();
    void indexTracker();
    void tokenCreator();
    void lineTracker();
    std::string getNextToken(TokenType nextToken);
};

#endif //TOKENIZER_H

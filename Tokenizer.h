//
// Created by oblit on 9/8/2021.
//

#ifndef TOKENIZER_H
#define TOKENIZER_H

class Tokenizer {
private:

public:
    Tokenizer();
    ~Tokenizer();
    void indexTracker();
    void tokenCreator();
    void lineTracker();
    void getNextToken(nextToken);
};

#endif //TOKENIZER_H

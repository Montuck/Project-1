//
// Created by oblit on 9/8/2021.
//

#include "Tokenizer.h"
#include "Token.h"

Tokenizer::Tokenizer() {

}

void Tokenizer::indexTracker() {

}

void Tokenizer::tokenCreator() {

}

void Tokenizer::lineTracker() {

}

void Tokenizer::getNextToken(nextToken) {
    switch(nextToken) {
        case COLON: return ":"; break;
        case COLON_DASH: return ":-"; break;
        case COMMA: return ","; break;
        case PERIOD: return "."; break;
        case Q_MARK: return "?"; break;
        case LEFT_PAREN: return "("; break;
        case RIGHT_PAREN: return ")"; break;
        case MULTIPLY: return "*"; break;
        case ADD: return "+"; break;
        case SCHEMES: return "Schemes"; break;
        case FACTS: return "Facts"; break;
        case RULES: return "Rules"; break;
        case QUERIES: return "Queries"; break;
        case ID: return "ID"; break;
        case STRING: return "string"; break;
        case COMMENT: return "comment"; break;
        case EOF: return "eof"; break;
        case UNDEFINED: return "undefined"; break;
        default: return "nothing"; break;
    }
}
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

std::string Tokenizer::getNextToken(TokenType nextToken) {
    switch(nextToken) {
        case TokenType::COLON: return ":"; break;
        case TokenType::COLON_DASH: return ":-"; break;
        case TokenType::COMMA: return ","; break;
        case TokenType::PERIOD: return "."; break;
        case TokenType::Q_MARK: return "?"; break;
        case TokenType::LEFT_PAREN: return "("; break;
        case TokenType::RIGHT_PAREN: return ")"; break;
        case TokenType::MULTIPLY: return "*"; break;
        case TokenType::ADD: return "+"; break;
        case TokenType::SCHEMES: return "Schemes"; break;
        case TokenType::FACTS: return "Facts"; break;
        case TokenType::RULES: return "Rules"; break;
        case TokenType::QUERIES: return "Queries"; break;
        case TokenType::ID: return "ID"; break;
        case TokenType::STRING: return "string"; break;
        case TokenType::COMMENT: return "comment"; break;
        case TokenType::EFO: return "eof"; break;
        case TokenType::UNDEFINED: return "undefined"; break;
        default: return "nothing"; break;
    }
}
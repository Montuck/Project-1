#include "Token.h"

Token::Token(TokenType token, std::string description, int line) {
    type = token;
    lineNumber = line;
    value = description;
}

string Token::toString(TokenType _type) {
    switch(_type) {
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

TokenType Token::getTokenType(){
    return type;
}

#include "Token.h"

Token::Token(TokenType token, std::string description, int line) {
    type = token;
    lineNumber = line;
    value = description;
}

string Token::toString() {
   string output = "(";
   output += getEnumString(type);
   output += ',';
   output += '"';
   output += getTokenType(type);
   output += '"';
   output += ',';
   output += to_string(lineNumber);
   output += ")";
   return output;
}

string Token::getTokenType(TokenType _type){
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

string Token::getEnumString(TokenType _type) {
    switch(_type) {
        case TokenType::COLON: return "COLON"; break;
        case TokenType::COLON_DASH: return "COLON_DASH"; break;
        case TokenType::COMMA: return "COMMA"; break;
        case TokenType::PERIOD: return "PERIOD"; break;
        case TokenType::Q_MARK: return "Q_MARK"; break;
        case TokenType::LEFT_PAREN: return "LEFT_PAREN"; break;
        case TokenType::RIGHT_PAREN: return "RIGHT_PAREN"; break;
        case TokenType::MULTIPLY: return "MULTIPLY"; break;
        case TokenType::ADD: return "ADD"; break;
        case TokenType::SCHEMES: return "SCHEMES"; break;
        case TokenType::FACTS: return "FACTS"; break;
        case TokenType::RULES: return "RULES"; break;
        case TokenType::QUERIES: return "QUERIES"; break;
        case TokenType::ID: return "ID"; break;
        case TokenType::STRING: return "STRING"; break;
        case TokenType::COMMENT: return "COMMENT"; break;
        case TokenType::EFO: return "EOF"; break;
        case TokenType::UNDEFINED: return "UNDEFINED"; break;
        default: return "nothing"; break;
    }
}



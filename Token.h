#ifndef TOKEN_H
#define TOKEN_H
#include <string>

using namespace std;

enum class TokenType {
    COLON,
    COLON_DASH,
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    EFO,
    UNDEFINED
};

class Token
{
private:
    std::string value = "empty";
    int lineNumber = 0;
    TokenType type = TokenType::UNDEFINED;
    friend class Lexer;

public:
    //Token();
    Token(TokenType token, string description, int line);
    string toString(TokenType _type);
    TokenType getTokenType();
    //friend class Lexer;
};

#endif // TOKEN_H


#ifndef TOKEN_H
#define TOKEN_H
#include <string>

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
    EOF,
    UNDEFINED
};

class Token
{
private:
    string value;
    int lineNumber;
    TokenType type;

public:
    Token(TokenType type, std::string description, int line);
    void toString(TokenType _type); //Write method
};

#endif // TOKEN_H


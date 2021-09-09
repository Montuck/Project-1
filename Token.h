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
    std::string value;
    int lineNumber;
    TokenType type;

public:
    Token(TokenType type, std::string description, int line);
    std::string toString(TokenType _type); //Write method
};

#endif // TOKEN_H


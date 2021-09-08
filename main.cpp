#include "Lexer.h"

int main(int argc, char** argv) {
    std::ifstream ifs;
    ifs.open(argv[1], std::ifstream::in);
    char c = ifs.get();

    Lexer* lexer = new Lexer();

    // TODO

    delete lexer;
    
    return 0;
}
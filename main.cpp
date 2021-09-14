#include "Lexer.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    TokenType teKen = TokenType::COLON;
    string what = ":";
    int line = 1;
    Token typo(teKen, what, line);
    if (argc != 2) {
        cout << "no file" << endl;
        return 1;
    }
    string fileName = argv[1];
    ifstream fin(fileName);
    if (fin.is_open()) {
        char c = fin.get();
        while (fin.peek() != EOF) {
            cout << c;
            c = fin.get();
        }
        cout << endl << endl;
    }
    else if (!(fin.is_open())) {
        cout << "failure" << endl;
    }
    Lexer* lexer = new Lexer();

    string col = ":-";
    lexer->Run(col);
    // TODO

    delete lexer;

    return 0;
}
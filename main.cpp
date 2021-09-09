#include "Lexer.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "no file" << endl;
        return 1;
    }
    string fileName = argv[1];
    ifstream fin(fileName);
    cout << fileName << endl;
    if (fin.is_open()) {
        char c = fin.get();
        while (fin.peek() != EOF) {
            cout << c;
            c = fin.get();
        }
    }
    else if (!(fin.is_open())) {
        cout << "failure" << endl;
    }
    Lexer* lexer = new Lexer();

    // TODO

    delete lexer;

    return 0;
}
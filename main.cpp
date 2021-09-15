#include "Lexer.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    //Check if command argument is valid
    if (argc != 2) {
        cout << "no file" << endl;
        return 1;
    }
    //Set filename and ifstream
    string fileName = argv[1];
    ifstream fin(fileName);
    string token = "";
    if (fin.is_open()) {
        char c = ' ';
        while (c != EOF) {
           c = fin.get();
           if (c == EOF) {break;}
           token += c;
       }
    }
    else if (!(fin.is_open())) {
        cout << "failure" << endl;
    }
    Lexer* lexer = new Lexer();
    lexer->Run(token);
    lexer->Print();
    // TODO

    delete lexer;

    return 0;
}
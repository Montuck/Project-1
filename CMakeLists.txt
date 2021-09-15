cmake_minimum_required(VERSION 3.16.3)
project(Project_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project_1
        Add.h
        Add.cpp
        Automaton.h
        BlockComment.cpp
        BlockComment.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        Comma.cpp
        Comma.h
        Comment.cpp
        Comment.h
        ID.cpp
        ID.h
        Left_Paren.cpp
        Left_Paren.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Multiply.cpp
        Multiply.h
        Period.cpp
        Period.h
        Q_Mark.cpp
        Q_Mark.h
        Queries.cpp
        Queries.h
        Right_Paren.cpp
        Right_Paren.h
        Rules.cpp
        Rules.h
        Schemes.cpp
        Schemes.h
        String.cpp
        String.h
        Token.cpp
        Token.h
        )

file(COPY resources DESTINATION ${CMAKE_BINARY_DIR})
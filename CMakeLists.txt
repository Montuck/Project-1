cmake_minimum_required(VERSION 3.16.3)
project(Project_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project_1
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h
        )

file(COPY resources DESTINATION ${CMAKE_BINARY_DIR})
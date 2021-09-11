#ifndef MATCHERAUTOMATON_H
#define MATCHERAUTOMATON_H

class MatcherAutomaton : public Automaton
{
private:
    std::string toMatch;
public:
    MatcherAutomaton(std::string toMatch, TokenType tokenType);
    int S0(const std::string& input);
};

#endif
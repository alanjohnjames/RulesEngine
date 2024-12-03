#include <iostream>

#include "rules_engine.hpp"

void BasicRulesEngine::addRule(Rule rule)
{
    rules.push_back(rule);
}

void BasicRulesEngine::executeRules()
{
    for (const auto &rule : rules)
    {
        if (rule())
        {
            std::cout << "Rule passed!" << std::endl;
        }
        else
        {
            std::cout << "Rule failed!" << std::endl;
        }
    }
}

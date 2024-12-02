#include "rules_engine.hpp"
#include <iostream>

void BasicRulesEngine::addRule(BasicRule rule)
{
    rules.push_back(rule);
}

void BasicRulesEngine::executeRules()
{
    for (const auto &rule : rules)
    {
        if (rule())
        {
            std::cout << "BasicRule passed!" << std::endl;
        }
        else
        {
            std::cout << "BasicRule failed!" << std::endl;
        }
    }
}

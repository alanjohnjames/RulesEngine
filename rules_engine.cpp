#include "rules_engine.hpp"
#include <iostream>

void RuleEngine::addRule(Rule rule) {
    rules.push_back(rule);
}

void RuleEngine::executeRules() {
    for (const auto& rule : rules) {
        if (rule()) {
            std::cout << "Rule passed!" << std::endl;
        } else {
            std::cout << "Rule failed!" << std::endl;
        }
    }
}

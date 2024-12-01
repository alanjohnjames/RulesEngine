
#pragma once

#include <vector>
#include <functional>

class RuleEngine {
public:
    using Rule = std::function<bool()>;

    void addRule(Rule rule);
    void executeRules();

private:
    std::vector<Rule> rules;
};

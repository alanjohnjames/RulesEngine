
#pragma once

#include <functional>
#include <vector>

class RulesEngine
{
public:
    using Rule = std::function<bool()>;

    void addRule(Rule rule);
    void executeRules();

private:
    std::vector<Rule> rules;
};

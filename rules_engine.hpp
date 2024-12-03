
#pragma once

#include <functional>
#include <vector>

class BasicRulesEngine
{
public:
    using Rule = std::function<bool()>;

    void addRule(Rule rule);
    void executeRules();

    auto getRules() const { return rules; }

private:
    std::vector<Rule> rules;
};

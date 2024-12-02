
#pragma once

#include <functional>
#include <vector>

class BasicRulesEngine
{
public:
    using BasicRule = std::function<bool()>;

    void addRule(BasicRule rule);
    void executeRules();

private:
    std::vector<BasicRule> rules;
};

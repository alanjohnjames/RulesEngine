#define CATCH_CONFIG_MAIN

#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <sstream>

#include "rules_engine.hpp"

// Example rule function
bool exampleRule()
{
    return true;
}

TEST_CASE("RulesEngine AddRule", "[RulesEngine]")
{
    BasicRulesEngine engine;
    BasicRulesEngine::Rule rule = exampleRule;
    engine.addRule(rule);
    REQUIRE(engine.getRules().size() == 1);
}

TEST_CASE("RulesEngine ExecuteRules", "[RulesEngine]")
{
    BasicRulesEngine engine;
    BasicRulesEngine::Rule rule = exampleRule;
    engine.addRule(rule);
    std::ostringstream oss;
    std::streambuf *p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());
    engine.executeRules();
    std::cout.rdbuf(p_cout_streambuf);
    REQUIRE(oss.str() == "Rule passed!\n");
}

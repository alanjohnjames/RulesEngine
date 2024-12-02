#include "rules_engine.hpp"
#include <iostream>

int main()
{
    BasicRulesEngine engine;

    // Add some rules
    engine.addRule([](){ return 5 > 3; });
    engine.addRule([](){ return 2 + 2 == 4; });
    engine.addRule([](){ return 1 == 0; });

    // Execute rules
    engine.executeRules();

    return 0;
}

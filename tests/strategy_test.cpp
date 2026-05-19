#include <gtest/gtest.h>

#include "Context.h"
#include "ConcreteStratergyA.h"

TEST(Strategy, CreateContext)
{
    IStratergy* strategy = new ConcreteStratergyA();

    Context context(strategy);

    EXPECT_NE(strategy, nullptr);

    delete strategy;
}

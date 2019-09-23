//
// Created by akihiro.aida on 2019-08-31.
//
#include <gtest/gtest.h>
#include "../functions.h"

TEST(CreateStringTest, FunctionsTest)
{

    EXPECT_EQ("Hello from C++", functions::createString());
}
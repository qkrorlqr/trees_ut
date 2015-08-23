/*
 * test_progopt.cpp
 *
 *  Created on: Aug 23, 2015
 *      Author: qkrorlqr
 */

#include "gtest/gtest.h"
#include "util/progopt.h"

using namespace NUtil;

namespace {
    const int ARGC = 2;
    const char* ARGV[] = {"-c", "foo"};
}

TEST(TestHas, positive) {
    TProgOptions opts(ARGC, ARGV);
    EXPECT_TRUE(opts.Has("c"));
}

/*
 * test_progopt.cpp
 *
 *  Created on: Aug 23, 2015
 *      Author: qkrorlqr
 */

#include "gtest/gtest.h"

#include <util/progopt.h>

using namespace NUtil;

namespace {
    const int ARGC = 7;
    const char* ARGV[] = {"binname", "-c", "foo", "unnamed1", "unnamed2", "-x", "something"};
}

TEST(TestHas, positive) {
    TProgOptions opts(ARGC, ARGV);
    EXPECT_TRUE(opts.Has("c"));
}

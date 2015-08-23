/*
 * gtest_main.cpp
 *
 *  Created on: Aug 23, 2015
 *      Author: qkrorlqr
 */

#include "gtest/gtest.h"

#include <iostream>

using namespace std;

GTEST_API_ int main(int argc, char** argv) {
    cout << "running tests" << endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

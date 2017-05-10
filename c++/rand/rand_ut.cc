// 
// rand_ut.cc
// google unit tests
//
// Copyright 2006, Google Inc.
// All rights reserved.
//
//

#include "rand.h"
#include <iostream>
#include <gtest/gtest.h>

int main(int argc, char **argv) 
{
  std::cout << "Running main() from gtest_main.cc\n";

  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(Rand, rnd_Limits)
{
	const int test_limit = 20;
	Rand r(1, test_limit);
	for (int n = 0; n < 1000; ++n)
	{
		int rn = r.rnd();
		EXPECT_GE(rn, 1);
		EXPECT_LE(rn, test_limit);
	}
}

TEST(Rand, random_Limits)
{
	Rand r;
	const int test_limit = 10;

	for (int n = 0; n < 1000; ++n)
	{
		int rn = r.random(test_limit);
		EXPECT_GE(rn, 0);
		EXPECT_LE(rn, test_limit);
	}
}

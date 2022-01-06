/**
 * @file main.cpp
 * @author Evren Kenanoglu (evren.kenanoglu@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-12-26
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <gtest/gtest.h>

 extern "C"
 {
 #include "test_lib_1.h"
 }

// TEST(assertation, assert_true)
// {
//     ASSERT_TRUE(true);
// }

// TEST(assertation, assert_false)
// {
//     ASSERT_FALSE(true);
// }

// TEST(assertation, assert_gt)
// {
//     ASSERT_GT(15, 16);
// }

// TEST(assertation, assertation_string_equal)
// {
//     ASSERT_STREQ("Hey!", "hey!");
// }

// TEST(assertation, assertation_str_equal_no_case)
// {
//     ASSERT_STRCASEEQ("HEYY!", "heyy!");
// }

// TEST(expectation, expect_test_str)
// {
//     EXPECT_STREQ("heyy", "heyy");
// }


TEST(test_lib_1, isNull)
{
	char *ch = NULL;
	EXPECT_EQ(NULL, isNull(ch));

}
TEST(test_lib_1, sizeOfArray)
{
	const char *ch = "HEYY";
	EXPECT_EQ(strlen("HEYY"), sizeOfArray(ch));

}

TEST(test_lib_1, factorial_1)
{
	ASSERT_EQ(1, factorial(0));
}

TEST(test_lib_1, factorial_2)
{
	ASSERT_EQ(1, factorial(1));
	
}
TEST(test_lib_1, factorial_3)
{
	ASSERT_EQ(720, factorial(6));
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

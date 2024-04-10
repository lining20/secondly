#include "pch.h"

TEST(TestCaseName, TestName) {
	int arr1[20] = { -5,3,2,4 };
	EXPECT_EQ(8, maxSubarraySum(arr1,4));
	EXPECT_TRUE(true);

	int arr2[20] = { -5,3,2,4 };
	EXPECT_EQ(9, maxSubarraySum(arr2, 4));
	EXPECT_TRUE(true);

	int arr3[20] = { -5,3,2,4 };
	EXPECT_EQ(9, maxSubarraySum(arr3, 4));
	EXPECT_TRUE(true);

	int arr4[20] = { -5,3,2,4 };
	EXPECT_EQ(8, maxSubarraySum(arr4, 4));
	EXPECT_TRUE(true);
}
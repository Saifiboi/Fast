#include "task1.cpp"
#include "gtest/gtest.h"

/* ****************  Task 1******************* */
TEST(Task1, First)
{
	int a1[]={2, 4, -6, 5, 8, -1};

	ASSERT_EQ(12 , sum(a1,6)); 
}

TEST(Task1, Second)
{
	int a2[]={1, 1, 1, 1, 1, 1};

	ASSERT_EQ(6 , sum(a2,6)); 
}



int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);	
    return RUN_ALL_TESTS();
}









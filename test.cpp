#include <gtest/gtest.h>
extern "C" {
	#include "joystick.h"
}

TEST(TestSetX, PositiveNumbers) {
	for(int i = -5; i < 6; i++)
		EXPECT_EQ(setX(i), i);
}

TEST(TestSetY, PositiveNumbers) {
	for(int i = -5; i < 6; i++)
		EXPECT_EQ(setY(i), i);
}

TEST(TestSetX, NegativeNumbers) {
	EXPECT_EQ(setX(-6), 0);
}

TEST(TestSetY, NegativeNumbers) {
	EXPECT_EQ(setY(-6), 0);
}

TEST(TestUpdateDot, PositiveNumbers) {
	Point p;
	for(int i = -5, j = 11, k = 1; i < 6; i++, j--, k++){
		p = updateDot(i, i);
		EXPECT_EQ(p.x, k);
		EXPECT_EQ(p.y, j);
	}
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

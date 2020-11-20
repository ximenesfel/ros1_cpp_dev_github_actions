#include <gtest/gtest.h>
#include <ros/ros.h>

TEST(DavidsTester, basicTest){
  EXPECT_TRUE(true);
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "add_two_ints");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
#include "gtest/gtest.h"

class AdditionTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

TEST_F(AdditionTest,twoValues){
    
    EXPECT_EQ(9,9);
    EXPECT_EQ(5,5);
}
#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(AddTest, HandlesStringInt) {
  Solution solution;
  std::string s="string";
  int x=4;
  std::string actual = solution.Add(s,x);
  std::string expected = "string4";
  EXPECT_EQ(expected, actual);
}

TEST(AddTest, HandlesIntString) {
  Solution solution;
  std::string s="string";
  int x=4;
  std::string actual = solution.Add(x,s);
  std::string expected = "string4";
  EXPECT_EQ(expected, actual);
}

TEST(AddTest, HandlesStrings) {
  Solution solution;
  std::string s="string";
  std::string actual = solution.Add(s,s);
  std::string expected = "stringstring";
  EXPECT_EQ(expected, actual);
}

TEST(AddTest, HandlesInts) {
  Solution solution;
  int x=4;
  int actual = solution.Add(x,x);
  int expected = 8;
  EXPECT_EQ(expected, actual);
}


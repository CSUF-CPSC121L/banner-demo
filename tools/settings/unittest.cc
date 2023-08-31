#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "../cppaudit/gtest_ext.h"

#include "../../banner.h"

TEST(Factorial, Zero) {
	SIMULATE_SIO("", DrawBanner("Hello"), {
    ASSERT_THAT(your_output, HasSubstr("*********\n* Hello *\n********"))
        << "Your program should draw a banner around the text, Hello.";
  })
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  bool skip = true;
  for (int i = 0; i < argc; i++) {
    if (std::string(argv[i]) == "--noskip") {
      skip = false;
    }
  }
  if (skip) {
    ::testing::UnitTest::GetInstance()->listeners().Append(new SkipListener());
  }
  return RUN_ALL_TESTS();
}
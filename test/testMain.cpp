#include <gmock/gmock.h>
#include "Example.hpp"
#include "Second.hpp"

using namespace testing;

namespace code_test
{
    TEST(ErrorTest, Constructor)
    {
        const char* what = "error";

        ASSERT_THAT("error", Eq(what));
    }

    TEST(TempTest, Constructor)
    {
        Example tmp("Imie");

        ASSERT_THAT(std::string("Imie"), tmp.getName());
    }

    TEST(TestTest, TestTestTest)
    {
        ASSERT_EQ(10, 10);
    }

    TEST(SecondTest, TestTestTest)
    {
        Second sec(65);
        
        ASSERT_EQ(65, sec.getCount());
    }
}

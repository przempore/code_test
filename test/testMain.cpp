#include <gmock/gmock.h>
#include "Example.h"

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
}

#include <gmock/gmock.h>

using namespace testing;

namespace code_test
{
    TEST(ErrorTest, Constructor)
    {
        const char* what = "error";

        ASSERT_THAT("error", Eq(what));
    }
}

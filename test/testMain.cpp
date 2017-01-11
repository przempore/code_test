#include <gmock/gmock.h>

using namespace testing;

namespace Gem
{
    TEST(ErrorTest, Constructor)
    {
        const char* what = "error";

        ASSERT_THAT("error", Eq(what));
    }
}

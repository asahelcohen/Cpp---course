#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Good snowman code(same numbers)")
{
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") \n"));
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) \n"));
    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) \n"));
}

TEST_CASE("Good snowman code(mixed combinations)")
{
    CHECK(snowman(12341234) == string("       \n _===_ \n (O.-)/\n<(> <) \n (   ) \n"));
    CHECK(snowman(43214321) == string("  ___  \n (_*_) \n (o_.) \n (] [)\\\n ( : ) \n"));
    CHECK(snowman(12344321) == string("       \n _===_ \n (O.-) \n (] [)\\\n ( : ) \n"));
    CHECK(snowman(11223344) == string("       \n _===_ \n (o,o) \n/(   )\\\n (   ) \n"));
    CHECK(snowman(44332211) == string("  ___  \n (_*_) \n\\(O O)/\n ( : ) \n ( : ) \n"));
    CHECK(snowman(24134323) == string("  ___  \n ..... \n (. O) \n (] [)\\\n (___) \n"));
    CHECK(snowman(41232321) == string("  ___  \n (_*_) \n\\(o,O) \n (] [)\\\n ( : ) \n"));
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK(snowman(34421132) == string("   _   \n  /_\\  \n (- o) \n<(> <)>\n (\" \") \n"));
}

TEST_CASE("Bad snowman code(less digits)")
{
    CHECK_THROWS(snowman(1234123));
    CHECK_THROWS(snowman(123213));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(1234432));
}

TEST_CASE("Bad snowman code(to many digits)")
{
    CHECK_THROWS(snowman(222334334));
    CHECK_THROWS(snowman(32435453354));
    CHECK_THROWS(snowman(123443211));
    CHECK_THROWS(snowman(4313243123));
}

TEST_CASE("Bad snowman code(invalid digits)")
{
    CHECK_THROWS(snowman(11112227));
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(1234 - 1234));
    CHECK_THROWS(snowman(12341234 - 4));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(04312343));
}

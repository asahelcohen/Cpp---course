#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
    CHECK(snowman(12341234) == string("       \n _===_ \n (O. )/\n<(> <) \n (   ) "));
    CHECK(snowman(43214321) == string("  ___  \n (_*_) \n (o_.) \n (] [)\\\n ( : ) "));    
    CHECK(snowman(12344321) == string("       \n _===_ \n (O. ) \n (] [)\\\n ( : ) "));
    CHECK(snowman(11223344) == string("       \n _===_ \n (o.o) \n/(   )\\\n (   ) "));
    CHECK(snowman(44332211) == string("  ___  \n (_*_) \n\\(O.O)/\n ( : ) \n ( : ) "));
    CHECK(snowman(24134323) == string("  ___  \n ..... \n (. _) \n (] [)\\\n (___) "));
    CHECK(snowman(41232321) == string("  ___  \n (_*_) \n\\(o,O) \n (] [)\\\n ( : ) "));

}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1234123));
    CHECK_THROWS(snowman(123213));
    CHECK_THROWS(snowman(222334334));
    CHECK_THROWS(snowman(32435453354));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(12432443));
    CHECK_THROWS(snowman(222));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(123443211));
    CHECK_THROWS(snowman(1234432));
    CHECK_THROWS(snowman(11112227));
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(1234-1234));
    CHECK_THROWS(snowman(12341234-4));
}


/* Add more test cases here */

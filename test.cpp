#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int sum1(int num)
{
    int sum = 0;
    for(; num; --num)
        sum += num;
    return sum;
}
int sum2(int num)
{
    return num*(1+num)/2;
}


TEST_CASE() {
    REQUIRE(sum1(2) == sum2(2));//REQUIRE用来判断是否相等,为false时将会终止当前test case
    //CHECK在表达式为false时会给出警告信息，但当前test case继续往下执行。
}

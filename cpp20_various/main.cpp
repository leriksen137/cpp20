// ReSharper disable CppZeroConstantCanBeReplacedWithNullptr
#include <compare>
#include <iostream>
#include <format>

#include "compiler_features.h"

void designated_initializers()
{
    struct S
    {
        int a;
        int b;
        int c;
    };

    const S s{ .a = 7, .c = 3 };
    std::cout << std::format("s = (a:{}, b:{}, c:{})", s.a, s.b, s.c) << std::endl;
}

void three_way_comparisons()
{
    const auto res = -0. <=> 0.;
    if (res < 0)      std::cout << "-0 is less than 0";
    else if (res > 0) std::cout << "-0 is greater than 0";
    else              std::cout << "-0 and 0 are equal";
}

int main()
{
    print_all_comiler_features();
    designated_initializers();
    three_way_comparisons();
}


#pragma once

struct Cat
{
    explicit Cat(const char* name) : _name(name) {}
    const char* _name;
};

// contrived example of macro that causes errors if include order is changed.
// c++20 modules don't allow for such errors.
#define woof_counter Dog // NOLINT(cppcoreguidelines-macro-usage, clang-diagnostic-keyword-macro)

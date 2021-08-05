#pragma once

struct Cat
{
    explicit Cat(const char* name) : _name(name) {}

    [[nodiscard]] const char* get_name() const {
        return _name;
    }
    void pet() const {}

    const char* _name;
};

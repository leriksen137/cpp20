#pragma once

struct Cat
{
    explicit Cat(const char* name) : _name(name) {}
    void pet() { pet_counter++; }

    const char* _name;
    int pet_counter{ 0 };
};

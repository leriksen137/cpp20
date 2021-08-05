#pragma once

struct Dog
{
    explicit Dog(const char* name) : _name(name) {}

    const char* _name;

    void bark() {
        woof_counter++;
    }

    [[nodiscard]] int get_woofs() const {
        return woof_counter;
    }
private:
    int woof_counter{ 0 };
};

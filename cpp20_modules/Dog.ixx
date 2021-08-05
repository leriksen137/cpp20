export module Dog;

export struct Dog
{
    explicit Dog(const char* name) : _name(name) {}

    [[nodiscard]] const char* get_name() const {
        return _name;
    }

    void bark() {
        woof_counter++;
    }

    const char* _name;

private:
    int woof_counter{ 0 };
};



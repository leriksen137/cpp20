export module Cat;

export struct Cat
{
    explicit Cat(const char* name) : _name(name) {}
    const char* _name;
};

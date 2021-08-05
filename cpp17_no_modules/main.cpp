#include "Dog.h"
#include "Cat.h"

#include <iostream>

int main()
{
    Cat cat("Gnocci");
    Dog dog("Fido");
    dog.bark();
    std::cout << cat._name << std::endl;
    std::cout << dog._name << std::endl;
}

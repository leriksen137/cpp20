import Dog;
import Cat;

#include <iostream>

int main()
{
    Cat c("Gnocci");
    Dog d("Tangyuan");
    d.bark();
    std::cout << c._name<< std::endl;
    std::cout << d._name << std::endl;
}

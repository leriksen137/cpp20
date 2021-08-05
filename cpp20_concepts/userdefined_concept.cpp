#include "Cat.h"
#include "Rock.h"

template <typename T>
concept pettable = requires(T c) {
    c.pet();
};

template <typename Pet>
requires pettable<Pet>
void pet(Pet p) {
    p.pet();
}

void user_defined_concepts_example() {
    const Cat mishou("Mishou");
    const Rock obsidian("Obsidian");
    pet(mishou);
    // pet(obsidian);
}

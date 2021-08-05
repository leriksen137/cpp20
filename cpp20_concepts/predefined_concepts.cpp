#include <numeric>
#include <vector>
#include "Cat.h"

template <typename T>
requires std::integral<T> || std::floating_point<T>
constexpr double calculate_average(const std::vector<T>&vec) {
    const double sum = std::accumulate(vec.begin(), vec.end(), 0.0);
    return sum / vec.size();
}

void predefined_concepts_example() {
    const std::vector ints{ 1, 2, 3, 4, 5 };
    const std::vector doubles{ 1., 2., 3., 4., 5. };
    const std::vector cats{ Cat("Filou"), Cat("Baba") };

    auto ints_result = calculate_average(ints);
    auto doubles_result = calculate_average(doubles);
    //auto cats_result = calculate_average(cats);
}

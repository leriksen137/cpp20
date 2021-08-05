#include <numeric>
#include <vector>
#include "Cat.h"

template <typename T, typename = std::enable_if_t<std::is_arithmetic_v<T>>>
constexpr double calculate_average(const std::vector<T>&vec) {
    const double sum = std::accumulate(vec.begin(), vec.end(), 0.0);
    return sum / vec.size();
}

int main() {
    const std::vector ints{ 1, 2, 3, 4, 5 };
    const std::vector doubles{ 1., 2., 3., 4., 5. };
    const std::vector cats{ Cat("Filou"), Cat("Baba") };

    auto ints_result = calculate_average(ints);
    auto doubles_result = calculate_average(doubles);
    // auto cats_result = calculate_average(cats);
}

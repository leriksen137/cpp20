#include <ranges>
#include <vector>
#include <list>

template <std::ranges::random_access_range R>
void effecient_sort(R t) { /* secret code */ }

void using_ranges_concepts()
{
    const std::vector my_vector = { 1, 2, 3, 4, 5, 6 };
    const std::list my_list = { 1, 2, 3, 4, 5, 6 };
    effecient_sort(my_vector);
    // effecient_sort(my_list);
}

int old_code_for_contiguous_memory(int* p)
{
    int wonky_sum = 0;
    while (p) wonky_sum += ++*p++;
    return wonky_sum;
}

void using_ranges_access()
{
    std::vector<int> my_vector{ 4, 2, 3, 1, 5 };
    std::list<int> my_list{ 4, 2, 3, 5, 2 };
    auto size = std::ranges::size(my_vector);
    auto wonky_sum = old_code_for_contiguous_memory(std::ranges::data(my_vector));
    // auto derp = old_code_for_contiguous_memory(std::ranges::data(my_list));
}

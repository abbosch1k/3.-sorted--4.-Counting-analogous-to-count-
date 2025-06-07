#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 3};

    std::sort(numbers.begin(), numbers.end());

    for (int n : numbers)
        std::cout << n << " "; // 1 2 3 5 8
}

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names = {"Ali", "Vali", "Hasan"};

    for (const auto& name : names)
        std::cout << name << std::endl;
}

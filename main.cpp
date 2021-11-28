#include <iostream>

#include <myMath.hpp>

int main()
{
    std::cout << "Enter two integers: ";
    int first{}, second{};
    std::cin >> first >> second;
    MyMath math;
    std::cout << first
              << " + "
              << second
              << " = "
              << math.bitwise_sum(first, second)
              << "\n";
    return 0;
}

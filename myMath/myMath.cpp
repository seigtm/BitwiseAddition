#include "myMath.hpp"

int MyMath::bitwise_sum(int first, int second)
{
    while (second) // second != 0
    {
        int carry = first & second;
        first ^= second;
        second = carry << 1;
    }

    return first;
}

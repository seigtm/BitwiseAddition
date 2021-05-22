#include <iostream>

/* Template:
  
  Input:
  first  =  5 = 0000 0101
  second = 12 = 0000 1100
  
  ~1~
  second = 12 != 0
  carry  = first &  second = 0000 0100 (4)
  first  = first ^  second = 0000 1001 (9)
  second = carry << 1      = 0000 1000 (8)
  
  ~2~
  second = 8 != 0
  carry  = first &  second = 0000 1000 (8)
  first  = first ^  second = 0000 0001 (1)
  second = carry << 1      = 0001 0000 (16)
  
  ~3~
  second = 16 != 0
  carry  = first &  second = 0000 0000 (0)
  first  = first ^  second = 0001 0001 (17)
  second = carry << 1      = 0000 0000 (0)

  ~4~
  second =  0 == 0
  
  Output: first = 17
/*

/**
  Bitwise sum function for two integers.
  @param first an integer argument, first summand
  @param second an integer argument, second summand
  @return The sum of a and b (integer)
*/
int bitwise_sum(int first = 0, int second = 0)
{
  while (second) // second != 0
  {
    int carry = first & second;
    first ^= second;
    second = carry << 1;
  }

  return first;
};

int main(int argc, char const *argv[])
{
  std::cout << "Enter two integers: ";
  int first{}, second{};
  std::cin >> first >> second;

  std::cout << first
            << " + "
            << second
            << " = "
            << bitwise_sum(first, second);

  return 0;
}

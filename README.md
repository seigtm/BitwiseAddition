# BitwiseAddition

Addition of two integers using only bitwise operators (C++).

```cpp
/**
  Bitwise sum function for two integers.
  @param first an integer argument, first summand
  @param second an integer argument, second summand
  @return The sum of a and b (integer)
*/
int bitwise_sum(int first = 0, int second = 0);
```

## Usage example

```cpp
std::cout << bitwise_sum(3, 5)        // Output: 8.
          << bitwise_sum(0, 0)        // Output: 0.
          << bitwise_sum(5000, 3000)  // Output: 8000.
          << bitwise_sum(171, 13)     // Output: 184.
          << bitwise_sum(788, 131);   // Output: 919.
```

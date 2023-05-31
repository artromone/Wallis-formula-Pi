#include <iostream>
constexpr unsigned long long doubFact(unsigned long long n)
{
  if (n == 2 || n == 1)
  {
    return n;
  }
  unsigned long long result = 1;
  size_t c = (n % 2 == 0) ? 2 : 3;
  for (auto i = n; i >= c; i -= 2)
  {
    result *= i;
  }
  return result;
}
constexpr double toSquare(double n)
{
  return n * n;
}
constexpr double calcPi(unsigned long long n)
{
  auto a = static_cast< double >(doubFact(2 * n));
  auto b = static_cast< double >(doubFact(2 * n - 1));
  return toSquare(a / b) * (2.0 / static_cast< double >(2 * n + 1));
}
int main()
{
  std::cout << calcPi(15); //3.09134
  return 0;
}

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
  for (unsigned long long i = 1; i <= 35; ++i)
  {
    std::cout << i << ") " << calcPi(i) << '\n';
  }
  return 0;
}

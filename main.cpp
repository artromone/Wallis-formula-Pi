#include "iostream"
double doubFact(double n)
{
  if (n == 2 || n == 1)
  {
    return n;
  }
  return n * doubFact(n - 2);
}
double doubFact(size_t n)
{
  return doubFact(static_cast< double >(n));
}
double toSquare(double n)
{
  return n * n;
}
int main()
{
  size_t n = 100;
  auto res =
    toSquare(doubFact(2 * n) / static_cast< double >(doubFact(2 * n - 1)))
    * (2 / static_cast< double >(2 * n + 1));
  std::cout << res;
}

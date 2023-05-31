#include <iostream>
long long doubFact(long long n)
{
  if (n == 2 || n == 1)
  {
    return n;
  }
  long long result = 1;
  size_t c = (n % 2 == 0) ? 2 : 3;
  for (long long i = n; i >= c; i -= 2)
  {
    result *= i;
  }
  return result;
}
double toSquare(double n)
{
  return n * n;
}
int main()
{
  long long n = 15;
  auto a = static_cast<double>(doubFact(2 * n));
  auto b = static_cast<double>(doubFact(2 * n - 1));
  double res = toSquare(a / b) * (2.0 / static_cast<double>(2 * n + 1));
  std::cout << a << '\n' << b << '\n' << res; //3.09134
  return 0;
}

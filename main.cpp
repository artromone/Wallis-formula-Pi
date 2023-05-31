#include "iostream"
int doubleFactorial(int n)
{
  if (n == 2 || n == 1)
  {
    return n;
  }
  return n * doubleFactorial(n - 2);
}
int main()
{
  std::cout << doubleFactorial(10);
}

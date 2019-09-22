#include <iostream>
#include <vector>

int countLastZeros(int number);
  
int main()
{
  std::cout << "fhfj"<< std::endl;
  int n = 100;
  int lastZeros = 0;
  int lastNumber = 5;
  for (int i = 2; i <= n; i++)
  {
    for (int j = lastNumber; j <= n; j = j + 5)
    {
      int nzeros = countLastZeros(i * j);
std::cout << ":" << nzeros << std::endl;
      if (nzeros > 0)
      {
        lastNumber = j + 5;
        lastZeros = lastZeros + nzeros;
      }
    }
  }
  std::cout << ":" << lastZeros << std::endl;
  return 0;
}

int countLastZeros(int number)
{
  int lzeros = 0;
  for (double i = number / 10; i == (int)i; i = i / 10)
  {
    lzeros++;
  }
  return lzeros;
}


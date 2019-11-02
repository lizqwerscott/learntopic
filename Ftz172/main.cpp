#include <iostream>
#include <vector>
#include <cmath>

int find5(int number);
  
int main()
{
  std::cout << "fhfj:";
  int n;
  std::cin >> n; 
  std::cout << std::endl;
  int numberzero = 0;
  numberzero = find5(n); 
  std::cout << ":" << numberzero << std::endl;
  return 0;
}

int find5(int number)
{
  int zero = 0;
  for (int i = int(log(number) / log(5)); i > 0; i--)
  {  
    int n5s = number / pow(5, i);
    zero += n5s;
  } 
  return zero;
}


// Random Rectangle

#include <iostream>
int main()
{
std::cout << "#"<<std::endl;
std::cout << "#"<<std::endl;
std::cout << "#"<<std::endl;

int min = 3;
unsigned seed = time(0);
srand(seed);
int max = 40;
double num = rand() % max + 40;

  return 0;
}

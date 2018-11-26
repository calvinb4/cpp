/* Calvin Bertoncini
 * 11/2/18
 */

#include <iostream>

int add(int x, int y); // forward declaration

int main()
{
  std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
  return 0;
}

int add(int x, int y)
{
  return x + y;
}

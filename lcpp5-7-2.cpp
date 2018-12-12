// Calvin Bertoncini
// 11-28-18

# include <iostream>

int sum_to(int value)
{
  int sum(0);
  for (int count(1); count <= value; count += 1)
    {
      sum += count; 
    }
  return sum;
}


int main()
{
  int sum = sum_to(5);
  std::cout << sum;
  return 0;
}

// Calvin Bertoncini
// 12-3-18

# include <iostream>

int main()
{
  double temp[365] = {};
  for (int x = 0; x < 365; x += 1)
    {
      std::cout << temp[x];
      std::cout << "\n";
    }
  return 0;
}

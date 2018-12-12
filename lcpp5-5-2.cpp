// Calvin Bertoncini
// 11-26-18

# include <iostream>

int main()
{
  int counter(97);

  while (counter < 97+26)
    {
      char letter = static_cast<char>(counter);
      std::cout << letter << " ";
      counter += 1;
    }
  return 0;
}

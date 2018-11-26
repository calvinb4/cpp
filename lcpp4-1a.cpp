// Calvin Bertoncini
// 11-18-18

# include <iostream>

int enter_integer()
{
  int x;
  std::cout << "Enter an integer: ";
  std::cin >> x;
  return x;
}

void swap_print(int larger, int smaller)
{
  if (smaller > larger)
    {
      int temp = smaller;
      smaller = larger;
      larger = temp;
    }

  std::cout << "The smaller value is: " << smaller << "\nThe larger value is: " << larger;

}

int main()
{
  int x = enter_integer();
  int y = enter_integer();
  swap_print(x, y);
  return 0;
}

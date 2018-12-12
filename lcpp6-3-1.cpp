// Calvin Bertoncini
// 12-3-18

# include <iostream>

int main()
{
  int array[] = {4, 6, 7, 3, 8, 2, 1, 9, 5};

  int len_array = sizeof(array) / sizeof(array[0]);

  for (int x = 0; x < len_array; x += 1)
    {
      std::cout << array[x] << " " ;
    }
  
  return 0;
}

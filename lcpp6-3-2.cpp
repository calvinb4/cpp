// Calvin Bertoncini
// 12-3-18

# include <iostream>

int get_index()
{while (true)
    {
      int index;
      std::cout << "Enter an index: ";
      std::cin >> index;

      if (std::cin.fail())
	{
	  std::cin.clear();
	  std::cin.ignore(32767, '\n');
	}

      else
	{
	std::cin.ignore(32767, '\n');

	if (index < 0 || index > 8)
	  {
	    std::cout << "Error. Invalid input.";
	  }
	else
	  return index;
	}
      
    }
  
  //return index;
}

int main()
{
  
  int index = get_index();

  int array[] = {4, 6, 7, 3, 8, 2, 1, 9, 5};

  std::cout << array[index];
  
  return 0;
}

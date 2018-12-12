// Calvin Bertoncini
// 11-28-18

# include <iostream>

int main()
{
  int outer(1);
  while (outer <= 5)
    {
      int inner(5);
      while (inner >= outer)
	{
	  std::cout << inner - outer + 1;
	  inner -= 1;
	}

      std::cout << "\n";
      outer +=1;
    }
  
  return 0;
}

// Calvin Bertoncini
// 12-3-18

# include <iostream>

namespace Animals
  {
    enum Animals
      {
	CHICKEN,
	DOG,
	CAT,
	ELEPHANT,
	DUCK,
	SNAKE,
	MAX_ANIMALS

      };
  }



int main()
{
  
  int legs[Animals::MAX_ANIMALS] = {};

  legs[Animals::CHICKEN] = 4;
  legs[Animals::DOG] = 4;
  legs[Animals::CAT] = 4;
  legs[Animals::ELEPHANT] = 4;
  legs[Animals::DUCK] = 4;
  legs[Animals::SNAKE] = 0;

  std::cout << legs[Animals::SNAKE];
  
  return 0;
}

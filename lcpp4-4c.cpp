// Calvin Bertoncini
// 11-19-18

# include <iostream>

enum Monster
  {
    MONSTER_ORC,
    MOSTER_GOBLIN,
    MONSTER_TROLL,
    MONSTER_OGRE,
    MONSTER_SKELETON
  };

int main()
{
  Monster monster = MONSTER_TROLL;
  std::cout << monster << "\n";
  return 0;
}

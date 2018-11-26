// Calvin Bertoncini
// 11-25-18

# include <iostream>
# include <string>

enum class Monster_type
  {
    OGRE,
    DRAGON,
    ORC,
    SPIDER,
    SLIME,
  };

struct Monster
{
  std::string name;
  Monster_type monster_type;
  int max_hp;
};

std::string get_type(Monster monster)
{
  if (monster.monster_type == Monster_type::OGRE)
    return "Ogre";
  else if (monster.monster_type == Monster_type::DRAGON)
    return "Dragon";
  else if (monster.monster_type == Monster_type::ORC)
    return "Orc";
  else if (monster.monster_type == Monster_type::SPIDER)
    return "Spider";
  else if (monster.monster_type == Monster_type::SLIME)
    return "Slime";
  else
    return "???";
}

void print_monster(Monster monster)
{
  std::string type = get_type(monster);
  std::cout << "The " << type;
  std::cout << " is named: " << monster.name;
  std::cout << " and has a max hp of: " << monster.max_hp;
  std::cout << "\n";
}

int main()
{ 
  Monster orc = {"joe",Monster_type::ORC,42};
  Monster slime = {"susan",Monster_type::SLIME,200};
  print_monster(orc);
  print_monster(slime);
  return 0;
}

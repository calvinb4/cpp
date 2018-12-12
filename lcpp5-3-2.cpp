// Calvin Bertoncini
// 11-25-18

# include <iostream>
# include <string>

enum class Animal
  {
    pig,
    chicken,
    goat,
    cat,
    dog,
    ostrich,
  };

std::string get_animal_name(Animal animal)
{
  std::string name;

  switch (animal)
    {
    case Animal::pig:
      name = "pig";
      break;
    case Animal::chicken:
      name = "chicken";
      break;
    case Animal::goat:
      name = "goat";
      break;
    case Animal::cat:
      name = "cat";
      break;
    case Animal::dog:
      name = "dog";
      break;
    case Animal::ostrich:
      name = "ostrich";
      break;
    }
  //std::cout << name;
  return name;
}

void print_stuff(Animal animal)
{
  int legs;
  
  switch (animal)
    {
    case Animal::pig:
    case Animal::goat:
    case Animal::cat:
    case Animal::dog:
      legs = 4;
      break;
    case Animal::chicken:
    case Animal::ostrich:
      legs = 2;
      break;
    default:
      legs = 4;
    }
  
  std::string name = get_animal_name(animal);

  std::cout << "A " << name << " has " << legs << " legs.\n";
}

int main()
{
  Animal animal;
  animal = Animal::goat;
  print_stuff(animal);
  return 0;
}

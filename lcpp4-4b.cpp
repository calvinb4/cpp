// Calvin Bertoncini
// 11-19-18

# include <iostream>
# include <string>

int main()
{
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cin.ignore(32767, '\n');
  
  std::cout << "Enter your full name: ";
  std::string name;
  std::getline(std::cin, name);

  int length = name.length();
  double year_letters;
  year_letters = age / length;
  std::cout << "You've lived " << year_letters << " years for each letter in your name.";
  return 0;
}

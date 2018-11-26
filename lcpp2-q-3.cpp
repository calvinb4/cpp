# include <iostream>

double enter_double()
{
  double x;
  std::cout << "Enter a float.\n";
  std::cin >> x;
  std::cout << "\n";
  return x;
}

char enter_symbol()
{
  char x;
  std::cout << "Enter +, -, *, or /\n";
  std::cin >> x;
  std::cout << "\n";
  return x;
}

void math_and_print(double x, double y, char sym)
{
  double ans;
  
  if (sym == '+')
    ans = x + y;
  else if (sym == '-')
    ans = x - y;
  else if (sym == '*')
    ans = x * y;
  else if (sym == '/')
    ans = x / y;

  std::cout << ans << "\n";
}

int main()
{
  double x = enter_double();
  double y = enter_double();
  char sym = enter_symbol();
  math_and_print(x, y, sym);
  return 0;
}

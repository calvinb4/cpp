// Calvin Bertoncini
// 11-26-18

# include <iostream>

int calculate(int x, int y, char op)
{
  int ans;
  
  switch (op)
    {
    case '+':
      ans = x + y;
      break;
    case '-':
      ans = x - y;
      break;
    case '*':
      ans = x * y;
      break;
    case '/':
      ans = x / y;
      break;
    default:
      ans = 0;
    }
  //std::cout << ans;
  return ans;
}

int main()
{
  int ans = calculate(3, 4, '*');
  std::cout << ans;
  return 0;
}

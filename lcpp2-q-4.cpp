// Calvin Bertoncini
// 11-18-18

# include <iostream>

constexpr double GRAVITY(9.8); // m/s

int enter_height()
{
  int x;
  std::cout << "Enter height of tower in meters: ";
  std::cin >> x;
  return x;
}

void find_height(int time, int initial_height)
{
  double height = -1 * GRAVITY * time * time / 2 + initial_height;
  if (height > 0)
    std::cout << "Height at " << time << " seconds is " << height << " meters" << "\n";
  else
    std::cout << "After " << time << " seconds, the ball has hit the ground :(";
}

int main()
{
  int x = enter_height();
  find_height(0, x);
  find_height(1, x);
  find_height(2, x);
  find_height(3, x);
  find_height(4, x);
  find_height(5, x);
  return 0;
}

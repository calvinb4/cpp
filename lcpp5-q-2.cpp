// Calvin Bertoncini
// 11-29-18

#include <iostream>
# include <random>
# include <ctime>

namespace Constants
{
  constexpr int min(1);
  constexpr int max(100);
  constexpr int num_tries(7);
}

int get_guess(int count);

auto get_answer()
{
  std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));
  std::uniform_int_distribution<> answer(Constants::min, Constants::max);

  //std::cout << answer(mersenne);
  
  return answer(mersenne);
}

bool guesser(auto answer)
{
  int num_tries(Constants::num_tries);
  int count(1);
  while (count <= num_tries)
    {
      bool win(false);
      bool stop(false);
  int guess = get_guess(count);
  count += 1;
  std::cout << guess << "\n";
  if (guess > answer)
    std::cout << "Your guess is too high.\n";
  else if (guess < answer)
    std::cout << "Your guess is too low.\n";
  else if (guess == answer)
    {std::cout << "You win!\n";
      win = true;
      stop = true;
      return stop;
    }
  if (count == num_tries + 1 && win == false)
    {std::cout << "You lose! :( The correct answer was: " << answer << "\n";
      stop = true;
      return stop;
    }
  }
}

int get_guess(int count)
{
  while (true)
    {std::cout << "Guess #" << count << ": ";
      int guess;
      std::cin >> guess;

  // Error handling
      if (std::cin.fail())
	{
	  std::cin.clear();
	  std::cin.ignore(32767, '\n');
	  std::cout << "Invalid input. Please try again\n";
	}
      else
	{
	  std::cin.ignore(32767, '\n');
	  
	  if (guess > Constants::max || guess < Constants::min)
	    std::cout << "Invalid input. Guess must be between " << Constants::max << " and " << Constants::min << "\n";
	  else
	    return guess;
	}
    }
}


char get_continue()
{
  while (true)
    {std::cout << "Would you like to play again (y/n)? \n";
      char contin;
      std::cin >> contin;

  // Error handling
      if (std::cin.fail())
	{
	  std::cin.clear();
	  std::cin.ignore(32767, '\n');
	  std::cout << "Invalid input. Please try again\n";
	}
      else
	{
	  std::cin.ignore(32767, '\n');
	  if (contin == 'y' || contin == 'n')
	    return contin;
	}
    }
}


int main()
{
  auto answer = get_answer();
  while(true)
    {
  bool stop = guesser(answer);
  char ans = get_continue();
  if (ans == 'n')
    break;
    }
  return 0;
}

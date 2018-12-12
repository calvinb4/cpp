// Calvin Bertoncini
// 12-3-18

# include <iostream>

int main()
{
  int scores[] = {84, 92, 76, 81, 56};
  const int num_students = sizeof(scores) / sizeof(scores[0]);

  int max_score = 0;
  int max_score_index = 0;

  for (int student = 0; student < num_students; student += 1)
    {
      if (scores[student] > max_score)
	{
	  max_score = scores[student];
	  max_score_index = student;
	}
    }

  std::cout << max_score_index;
  
  return 0;
}

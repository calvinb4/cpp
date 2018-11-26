// Calvin Bertoncini
// 11-19-18

# include <iostream>

struct Fraction
{
  int numerator;
  int denomenator;
};

Fraction get_fraction()
{
  Fraction fraction;
  std::cout << "Enter fraction numerator: ";
  std::cin >> fraction.numerator;
  std::cout << "Enter fraction denomenator: ";
  std::cin >> fraction.denomenator;
  return fraction;
}

double multiply(Fraction fraction_1, Fraction fraction_2)
{
  double frac_1_n = fraction_1.numerator;
  double frac_1_d = fraction_1.denomenator;
  double frac_1 = frac_1_n / frac_1_d;
  double frac_2_n = fraction_2.numerator;
  double frac_2_d = fraction_2.denomenator;
  double frac_2 = frac_2_n / frac_2_d ;
  //std::cout << frac_1 << "Frac 2: " << frac_2;
  double ans = frac_1 * frac_2;
  return ans;
}

int main()
{
  Fraction fraction_1 = get_fraction();
  Fraction fraction_2 = get_fraction();
  double ans = multiply(fraction_1, fraction_2);
  std::cout << "Multiplied fractions = " << ans;
  return 0;
}

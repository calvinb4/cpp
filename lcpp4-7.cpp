// Calvin Bertoncini
// 11-19-18

# include <iostream>

struct Advertising
{
  int ads_shown;
  double percent_clicked;
  double average_earnings_clicked;
};

Advertising get_values()
{
  Advertising advertising;
  int ads_shown;
  std::cout << "Enter number of ads shown: ";
  std::cin >> ads_shown;
  double percent_clicked;
  std::cout << "Enter percent of ads clicked: ";
  std::cin >> percent_clicked;
  double earnings;
  std::cout << "Enter average earnings from clicked ads: ";
  std::cin >> earnings;
  advertising.ads_shown = ads_shown;
  advertising.percent_clicked = percent_clicked;
  advertising.average_earnings_clicked = earnings;
  return advertising;
}

double profit(Advertising ad_data)
{
  std::cout << "Ads shown: " << ad_data.ads_shown << "\nPercent clicked: " << ad_data.percent_clicked << "\nAverage earnings per clicked: " << ad_data.average_earnings_clicked;
  double earnings = ad_data.ads_shown * ad_data.percent_clicked * ad_data.average_earnings_clicked;
  return earnings;
}

int main()
{
  Advertising ad_data = get_values();
  double earnings = profit(ad_data);
  std::cout << "\nEarnings are: " << earnings;
  return 0;
}

#include <iomanip>
#include namespace std;
using namespace std;

double nthpowerp(int power)
{
  int result = 1;
  for(int i = 0; i < power; ++i)
  {
    result *= 2;
  }
  return result;
}

double nthpowern(int n)
{
  double result = 1;
  int power = n;
  for(int i = 0; i < abs(power); ++i)
  {
    cout << power << endl;
    result *= .5;
  }
  double invertedpower = 1.0/result;
  return invertedpower;
}

void printout(int result)
{
  cout << result;
}

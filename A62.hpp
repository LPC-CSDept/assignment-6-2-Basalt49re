//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double nthpowerp(int);
double nthpowern(int);
void printout(int);

int main ()
{

  int input,result;

  cout << "Enter your input" << endl;
  cin >> input;

  if (input > 0)
  {
    result = nthpowerp(input);
  }

  else if (input < 0)
  {
    result = nthpowern(input);
  }
  else
  {
    result = 1;
  }

  printout(result);


}

double nthpowerp(int power)
{
  int result = 1;
  for(int i = 0; i < power; ++i)
  {
    result *= 2;
  }
  return result;
}

double nthpowern(int power)
{
  int result = 1;
  for(int i = 0; i < power; ++i)
  {
    result *= 0.5;
  }
  return result;
}

void printout(int result)
{
  cout << result;
}
#include <iostream>
using namespace std;

double nthpowerp(int);
double nthpowern(int);
void printout(int);

int main ()
{

  int input,result;

  cout << "Enter input" << endl;
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

double nthpowern(int n)
{
  double result = 1;
  int power = n;
  for(int i = 0; i < abs(power); ++i)
  {
    
    result *= .5;
  }
  double invertedpower = 1.0/result;
  return invertedpower;
}

void printout(int result)
{
  cout << result;
}
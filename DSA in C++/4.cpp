#include <iostream>
using namespace std;

int main()
{
  /*
  int N = 10;
  int i = 1;
  int sum = 0;

  while (i <= N)
  {
    sum += i;
    cout << i << endl;
    i++;
  }

  cout << sum << endl;
  */

  // Prime Or Not
  int num = 12;
  int i = 2;
  while (i < num)
  {
    if (num % i == 0)
    {
      cout << num << " is Not Prime" << endl;
      break;
    }
    i++;
  }
}
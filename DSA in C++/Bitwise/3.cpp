#include <iostream>

using namespace std;

int main()
{

  /*
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
      cout << i;
    }
  */

  int n = 10;
  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";

  for (int i = 0; i < n; i++)
  {
    int nextNum = a + b;
    cout << nextNum << " ";
    a = b;
    b = nextNum;
  }
}

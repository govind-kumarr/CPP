#include <iostream>
#include <string>
using namespace std;

int main()
{
  int num = 10;
  int digit;
  string ans;
  while (num != 0)
  {
    digit = num % 2;
    ans += digit;
    num = num / 2;
  }

  cout << ans << endl;
}
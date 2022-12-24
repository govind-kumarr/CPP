#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(6);
  s.insert(6);
  s.insert(8);
  s.insert(8);
  s.insert(1);

  for (auto i : s)
  {
    cout << i << endl;
  }

  cout << "Is 5 present or not" << s.count(5) << endl;

  
}
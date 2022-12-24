#include <iostream>
#include <deque>
using namespace std;

int main()
{
  deque<int> d;
  d.push_back(2);
  d.push_front(1);
  d.push_back(3);
  d.push_back(4);
  d.push_back(5);

  for (int i : d)
  {
    cout << i << endl;
  }

  // cout << "Print 1st index Element: " << d.at(1) << endl;
  // cout << "Print Front Element: " << d.front() << endl;
  // cout << "Print Last Element: " << d.back() << endl;
  // cout << "Print Last Element: " << d.back() << endl;

  // cout << "Front Iterator" << d.begin() << endl;
  // cout << "Last Iterator" << d.end() << endl;

  d.erase(d.begin(), d.begin() + 1);
  for (int i : d)
  {
    cout << i << endl;
  }
}
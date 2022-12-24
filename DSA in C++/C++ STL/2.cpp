#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  cout << "Size of vector v: " << v.capacity() << endl;

  v.push_back(1);
  cout << "Size of vector v: " << v.capacity() << endl;

  v.push_back(2);

  v.push_back(3);

  v.push_back(4);
  cout << "Size of vector v: " << v.capacity() << endl;

  cout << "Element at 2nd index " << v.at(2) << endl;

  cout << "Front Element " << v.front() << endl;
  cout << "Last Element " << v.back() << endl;

  v.pop_back();

  cout << "after pop" << endl;
  for (int i : v)
  {
    cout << i << endl;
  }

  v.clear();

  vector<int> newVector(5, 1);
  for (int i : newVector)
  {
    cout << i << endl;
  }
}
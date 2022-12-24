#include <iostream>
#include <queue>

using namespace std;

int main()
{
  //! Max Heap
  priority_queue<int> max;

  //! Min Heap
  priority_queue<int, vector<int>, greater<int>> min;

  max.push(1);
  max.push(3);
  max.push(2);
  max.push(0);

  int size = max.size();
  for (int i = 0; i < size; i++)
  {
    cout << max.top() << " ";
    max.pop();
  }
}
#include <iostream>
using namespace std;

class Hero
{
private:
  int health = 90;

public:
  //! properties
  char level = 'D';

  int getHealth()
  {
    return health;
  }
  void setHealth(int health)
  {
    this->health = health;
  }

  void print()
  {
    cout << "This is Hero Class" << endl;
  }
};

int main()
{
  Hero Santosh;
  cout << "size : " << sizeof(Santosh) << endl;
  cout << "health : " << Santosh.getHealth() << endl;
  Santosh.setHealth(80);
  cout << "health : " << Santosh.getHealth() << endl;
  cout << "level : " << Santosh.level << endl;
  Santosh.print();
  return 0;
};
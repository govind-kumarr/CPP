#include <iostream>

using namespace std;

int main()
{

  /*
  left shift operator << multiplied by 2
  Right shift operator >> divided by 2
  */

  cout << (17 << 1) << endl; // 17 multiplied by 2 one time
  cout << (21 >> 2) << endl; // 21 divided by 2 two times

  /*
  i++ -->Post increment Use it then increment it
  ++i -->Pre increment First increment it then use it
  */

  int i = 7;
  cout << (i++) << endl;
  cout << (++i) << endl;
  cout << (i--) << endl;
  cout << (--i) << endl;

  /*
  1.
  int a, b = 1;
  a=10;
  if(++a) cout<<b;
  else cout<<++b;

  2.
  int a=1;
  int b=2;

  if(a-- > 0&& ++b > 2){
    cout<<"Stage1 - Inside If";
  }else{
    cout<<"Stage2 - Inside else";
  }
  cout<<a<<" "<<b<<endl;

  3.
  int number = 3;
  cout << (25*(++number));

  4.
  int a = 1;
  int b = a++;
  int c = ++a;
  cout<<b;
  cout<<c;
  */
}
//Static keyword

/*
#include <iostream>
using namespace std;
//without static
void func(){

    int x = 0;
    cout << x << endl;
    x++;
}

int main() {
  func();
  func();
  func();

  return 0;
}

*/

#include <iostream>
using namespace std;
//with static
void func1(){

    static int x = 0;
    cout << x << endl;
    x++;
}

int main() {
  func1();
  func1();
  func1();

  return 0;
}